#ifndef MYMAS_H
#define MYMAS_H
#include <iostream>
#include <cassert>
#include <memory.h>
#include <stdlib.h>
using namespace std;
class mymas {

public:
  mymas();
  mymas(int initSize);
  mymas(const mymas &original);
  ~mymas();

  void insert(int position, int value);
  int get(int position);

  int getSize();
  void resize(int newSize);

  int &operator[](int index);
  bool operator==(mymas);
  bool operator!=(mymas);
  mymas operator+(const int a);
  mymas operator+=(const int a);

  mymas operator+(mymas);
  mymas operator+=(mymas);
  mymas operator-(mymas);
  mymas operator-=(mymas);

  int setter(int a,int pos);
  bool settercheck(int a);
  bool poscheck(int pos);
  int getter(int pos);

  friend ostream& operator<<(ostream& output, const mymas& rhs);
private:
  int size;
  int *array;

};
#endif // MYMAS_H
