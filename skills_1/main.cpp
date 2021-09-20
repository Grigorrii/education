#include <iostream>
#include <mystring.h>

using namespace std;
void test_compare(){

   cout << "test_compare" << endl;
   char* test_string= "We Here";
   MyString a = MyString(test_string);
   cout << a << endl;
   MyString b= MyString("We Not Here");
   cout << b << endl;
   MyString c = b;
   cout << c << endl;
   cout << a.compare(test_string) << endl;
   cout << c.compare(b) << endl;
   cout << c.compare(a) << endl;

}
void test_init(){
    cout << "test_init" << endl;
    char* test_string= "We Here";
    MyString a = MyString(test_string);
    cout << a << endl;
    MyString b= MyString("We Not Here");
    cout << b << endl;
    MyString c = b;
    cout << c << endl;
}
void test_length(){
    cout << "test_length" << endl;
    MyString b= MyString("We Not Here");
    cout << b.length() << endl;
}
void test_add(){
     cout << "test_add" << endl;
     MyString b= MyString("We Not Here");
     cout << b << endl;
     char* test_string= "Hello";
     b.add(test_string);

     cout << b << endl;

     MyString a = b;
     cout << b.add(a) << endl;


}

int strcontains(char *s2, char *s1)
{
  int i, j;
  int flag = 0;

  if ((s2 == NULL || s1 == NULL)) return NULL;

  for( i = 0; s2[i] != '\0'; i++)
  {
    if (s2[i] == s1[0])
    {
      for (j = i; ; j++)
      {
        if (s1[j-i] == '\0'){ flag = 1; break;}
        if (s2[j] == s1[j-i]) continue;
        else break;
      }
    }
    if (flag == 1) break;
  }

  if (flag) return (i);
  else return -1;
}

void test_strstr(){
    cout << "test_strstr" << endl;
    char* test_string= "Hello";
    char* test_string2= "el";
    cout << strcontains(test_string,test_string2) << endl;
    test_string ="We Here?";
    test_string2="res";
    cout << strcontains(test_string,test_string2) << endl;

}
int main()
{

    test_init();
    test_compare();
    test_length();
    test_add();

    test_strstr();


    cout << "Hello World!" << endl;
    return 0;
}
