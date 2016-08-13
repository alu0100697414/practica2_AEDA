/* Clase natural */
#pragma once

#include <iostream>
#include <assert.h>

using namespace std;

class Natural {

private:

  unsigned int dato_;

public:

  Natural(void);
  Natural(unsigned int dato);
  ~Natural(void);

  Natural operator +(const Natural a);
  Natural operator -(const Natural a);
  Natural operator *(const Natural a);
  Natural operator /(const Natural a);

  Natural operator =(const Natural a);
  bool operator ==(const Natural a);
  bool operator !=(const Natural a);

  bool operator <(const Natural a);
  bool operator >(const Natural a);
  bool operator <=(const Natural a);
  bool operator >=(const Natural a);

  friend ostream& operator <<(ostream &o, Natural &dato);
  friend istream& operator >>(istream &i, Natural &dato);

  unsigned int get_dato(void);

};
