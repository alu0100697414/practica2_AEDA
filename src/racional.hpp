/* Clase racional */
#pragma once

#include <iostream>
#include <assert.h>

using namespace std;

class Racional {

private:

  int num_;
  unsigned int den_;

public:

  Racional(void);
  Racional(int num, unsigned int den);
  ~Racional(void);

  Racional operator +(const Racional a);
  Racional operator -(const Racional a);
  Racional operator *(const Racional a);
  Racional operator /(const Racional a);

  Racional operator =(const Racional a);
  bool operator ==(const Racional a);
  bool operator !=(const Racional a);

  bool operator <(Racional a);
  bool operator >(Racional a);
  bool operator <=(Racional a);
  bool operator >=(Racional a);

  friend ostream& operator <<(ostream &o, Racional &a);
  friend istream& operator >>(istream &i, Racional &a);

  int get_num(void);
  unsigned int get_den(void);

  void reducir(int &a, unsigned int &b);

};
