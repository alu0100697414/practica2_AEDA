#include "entero.hpp"

using namespace std;

Entero::Entero(void):dato_(0){}

Entero::Entero(int dato):dato_(dato){}

Entero::~Entero(void){}

Entero Entero::operator+(const Entero a){
  Entero res;

  res.dato_ = dato_ + a.dato_;

  return res.dato_;
}

Entero Entero::operator-(const Entero a){
  Entero res;

  res.dato_ = dato_ - a.dato_;

  return res.dato_;
}

Entero Entero::operator*(const Entero a){
  Entero res;

  res.dato_ = dato_ * a.dato_;

  return res.dato_;
}

Entero Entero::operator/(const Entero a){
  Entero res;

  res.dato_ = dato_ / a.dato_;

  return res.dato_;
}

Entero Entero::operator =(const Entero a){
  dato_ = a.dato_;

  return dato_;
}

bool Entero::operator ==(const Entero a){
  return dato_ == a.dato_;
}

bool Entero::operator !=(const Entero a){
  return dato_ != a.dato_;
}

bool Entero::operator <(const Entero a){
  return dato_ < a.dato_;
}

bool Entero::operator >(const Entero a){
  return dato_ > a.dato_;
}

bool Entero::operator <=(const Entero a){
  return dato_ <= a.dato_;
}

bool Entero::operator >=(const Entero a){
  return dato_ >= a.dato_;
}

ostream& operator <<(ostream &o, Entero &dato){
  o << dato.dato_;
  return o;
}

istream& operator >>(istream &i, Entero &dato){
  cout << "Introduzca el valor que desee para la variable: ";
  i >> dato.dato_;
  i.ignore();
  return i;
}

int Entero::get_dato(void){
  return dato_;
}
