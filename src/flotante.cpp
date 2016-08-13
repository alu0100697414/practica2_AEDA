#include "flotante.hpp"

using namespace std;

Flotante::Flotante(void):dato_(0){}

Flotante::Flotante(float dato):dato_(dato){}

Flotante::~Flotante(void){}

Flotante Flotante::operator+(const Flotante a){
  Flotante res;

  res.dato_ = dato_ + a.dato_;

  return res.dato_;
}

Flotante Flotante::operator-(const Flotante a){
  Flotante res;

  res.dato_ = dato_ - a.dato_;

  return res.dato_;
}

Flotante Flotante::operator*(const Flotante a){
  Flotante res;

  res.dato_ = dato_ * a.dato_;

  return res.dato_;
}

Flotante Flotante::operator/(const Flotante a){
  Flotante res;

  res.dato_ = dato_ / a.dato_;

  return res.dato_;
}

Flotante Flotante::operator =(const Flotante a){
  dato_ = a.dato_;

  return dato_;
}

bool Flotante::operator ==(const Flotante a){
  return dato_ == a.dato_;
}

bool Flotante::operator !=(const Flotante a){
  return dato_ != a.dato_;
}

bool Flotante::operator <(const Flotante a){
  return dato_ < a.dato_;
}

bool Flotante::operator >(const Flotante a){
  return dato_ > a.dato_;
}

bool Flotante::operator <=(const Flotante a){
  return dato_ <= a.dato_;
}

bool Flotante::operator >=(const Flotante a){
  return dato_ >= a.dato_;
}

ostream& operator <<(ostream &o, Flotante &dato){
  o << dato.dato_;
  return o;
}

istream& operator >>(istream &i, Flotante &dato){
  cout << "Introduzca el valor que desee para la variable: ";
  i >> dato.dato_;
  i.ignore();
  return i;
}

float Flotante::get_dato(void){
  return dato_;
}
