/* Clase flotante */
#pragma once

#include <iostream>
#include <assert.h>

using namespace std;

class Flotante {

private:

  float dato_;

public:

  Flotante(void);
  Flotante(float dato);
  ~Flotante(void);

  Flotante operator +(const Flotante a);
  Flotante operator -(const Flotante a);
  Flotante operator *(const Flotante a);
  Flotante operator /(const Flotante a);

  Flotante operator =(const Flotante a);
  bool operator ==(const Flotante a);
  bool operator !=(const Flotante a);

  bool operator <(const Flotante a);
  bool operator >(const Flotante a);
  bool operator <=(const Flotante a);
  bool operator >=(const Flotante a);

  friend ostream& operator <<(ostream &o, Flotante &dato);
  friend istream& operator >>(istream &i, Flotante &dato);

  float get_dato(void);

};
