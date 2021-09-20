#include "mymas.h"

mymas::mymas() {
  mymas(5);
}

mymas::mymas(int initSize) {
  size = initSize;
  array = new int[size];
  for (int i = 0; i < size; i++) {
    array[i] = 0; // Fill with zeroes
  }
}

mymas::mymas(const mymas &original) {
  size  = original.size;
  array = new int[size];
  for (int i = 0; i < size; i++) {
    array[i] = original.array[i];
  }
}

mymas::~mymas() {
  delete[] array;
}


void mymas::insert(int position, int value) {
  array[position] = value;
}

int mymas::get(int position) {
  return array[position];
}

int mymas::getSize() {
  return size;
}

void mymas::resize(int newSize) {
  int *temp;
  temp = new int[newSize];
  for (int i = 0; i < (newSize); i++) {
     temp[i] = array[i];
  }
  delete[] array;
  array = temp;
  size = newSize;
}

bool mymas::operator==(mymas a)  {
  if (a.size != size) return false;

  for (int i = 0; i < (a.size); i++) {
    if (a[i] != array[i]) return false;
  }
}

bool mymas::operator!=(mymas a)  {
  if (a.size != size) return true;

  for (int i = 0; i < (a.size); i++) {
    if (a[i] != array[i]) return true;
  }
}

int &mymas::operator[](int index) {
  if ((index - 1) > size) {
    resize(index + 1);
  }
  return array[index]; // returned as a reference
}
 void summ( mymas &  ){
   int dlina;
   if( size>=)
     dlina=;



 ostream& operator<<(ostream& output, const mymas& rhs){
    int i;
    for (i=0; i<rhs.size; i++)
    {
        output<<rhs.array[i]<<" ";
    }

    output<<std::endl;
    return output;
};

mymas mymas::operator+(const int a)
 {
     *array=*((int*)realloc((void*)(*array),sizeof(int)*(size+1)));
     size=size+1;
     array[size]=a;

     return *this;
 }
mymas mymas::operator+=(const int a)
 {
     *array=*((int*)realloc((void*)(*array),sizeof(int)*(size+1)));
     size=size+1;
     array[size]=a;

     return *this;
 }

bool mymas::settercheck(int a){
    if (abs(a)>100) return false;
    else return true;

}

bool mymas::poscheck(int pos){
    if (pos>size || pos<0) return false;
    else return true;

}


int mymas::setter(int a, int pos){
    if (poscheck(pos) && settercheck(a)){
        array[pos]=a;
        return 1;
    }
    else return -1;
}

int mymas::getter(int pos){
    if (poscheck(pos)){
            return array[pos];
    }
    else {
        cout << "error in position. Wrong allocation";
        return -1;
    }
}
