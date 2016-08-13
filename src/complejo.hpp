/* Clase complejo */
#pragma once

#include <iostream>
#include <assert.h>

using namespace std;

class Complejo {

private:

  float re_;
  float im_;

public:

  Complejo(void);
  Complejo(float re, float im);
  ~Complejo(void);

  Complejo operator +(const Complejo a);
  Complejo operator -(const Complejo a);
  Complejo operator *(const Complejo a);
  Complejo operator /(const Complejo a);

  Complejo operator =(const Complejo a);
  bool operator ==(const Complejo a);
  bool operator !=(const Complejo a);

  bool operator <(const Complejo a);
  bool operator >(const Complejo a);
  bool operator <=(const Complejo a);
  bool operator >=(const Complejo a);

  friend ostream& operator <<(ostream &o, Complejo &a);
  friend istream& operator >>(istream &i, Complejo &a);

  float get_re(void);
  float get_im(void);

};
