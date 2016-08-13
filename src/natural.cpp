#include "natural.hpp"

using namespace std;

Natural::Natural(void):dato_(0){}

Natural::Natural(unsigned int dato):dato_(dato){}

Natural::~Natural(void){}

Natural Natural::operator+(const Natural a){
  Natural res;

  res.dato_ = dato_ + a.dato_;

  return res.dato_;
}

Natural Natural::operator-(const Natural a){
  assert(a.dato_ < dato_); // Si es verdadero no pasa nada

  Natural res;

  res.dato_ = dato_ - a.dato_;

  return res.dato_;
}

Natural Natural::operator*(const Natural a){
  Natural res;

  res.dato_ = dato_ * a.dato_;

  return res.dato_;
}

Natural Natural::operator/(const Natural a){
  Natural res;

  res.dato_ = dato_ / a.dato_;

  return res.dato_;
}

Natural Natural::operator =(const Natural a){
  dato_ = a.dato_;

  return dato_;
}

bool Natural::operator ==(const Natural a){
  return dato_ == a.dato_;
}

bool Natural::operator !=(const Natural a){
  return dato_ != a.dato_;
}

bool Natural::operator <(const Natural a){
  return dato_ < a.dato_;
}

bool Natural::operator >(const Natural a){
  return dato_ > a.dato_;
}

bool Natural::operator <=(const Natural a){
  return dato_ <= a.dato_;
}

bool Natural::operator >=(const Natural a){
  return dato_ >= a.dato_;
}

ostream& operator <<(ostream &o, Natural &dato){
  o << dato.dato_;
  return o;
}

istream& operator >>(istream &i, Natural &dato){
  cout << "Introduzca el valor que desee para la variable: ";
  i >> dato.dato_;
  i.ignore();
  return i;
}

unsigned int Natural::get_dato(void){
  return dato_;
}
