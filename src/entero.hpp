/* Clase entero */
#pragma once

#include <iostream>
#include <assert.h>

using namespace std;

class Entero {

private:

  int dato_;

public:

  Entero(void);
  Entero(int dato);
  ~Entero(void);

  Entero operator +(const Entero a);
  Entero operator -(const Entero a);
  Entero operator *(const Entero a);
  Entero operator /(const Entero a);

  Entero operator =(const Entero a);
  bool operator ==(const Entero a);
  bool operator !=(const Entero a);

  bool operator <(const Entero a);
  bool operator >(const Entero a);
  bool operator <=(const Entero a);
  bool operator >=(const Entero a);

  friend ostream& operator <<(ostream &o, Entero &dato);
  friend istream& operator >>(istream &i, Entero &dato);

  int get_dato(void);

};
