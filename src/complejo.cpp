#include "complejo.hpp"

using namespace std;

Complejo::Complejo(void):re_(0.0),im_(0.0){}

Complejo::Complejo(float re, float im):re_(re),im_(im){}

Complejo::~Complejo(void){}

Complejo Complejo::operator+(const Complejo a){
  return Complejo(re_+a.re_, im_+a.im_);
}

Complejo Complejo::operator-(const Complejo a){
  return Complejo(re_-a.re_, im_-a.im_);
}

Complejo Complejo::operator*(const Complejo a){
  return Complejo(re_*a.re_-im_*a.im_, re_*a.im_+im_*a.re_);
}

Complejo Complejo::operator/(const Complejo a){
  return Complejo((re_*a.re_+im_*a.im_)/(a.re_*a.re_+a.im_*a.im_), (im_*a.re_-re_*a.im_)/(a.re_*a.re_+a.im_*a.im_));
}

Complejo Complejo::operator =(const Complejo a){
  re_ = a.re_;
  im_ = a.im_;

  return *this;
}

bool Complejo::operator ==(const Complejo a){
  return (re_==a.re_ && im_==a.im_);
}

bool Complejo::operator !=(const Complejo a){
  return (re_!=a.re_ || im_!=a.im_);
}

bool Complejo::operator <(const Complejo a){
  return ((re_<a.re_)||(re_==a.re_ && im_<a.im_));
}

bool Complejo::operator >(const Complejo a){
  return ((re_>a.re_)||(re_==a.re_ && im_>a.im_));
}

bool Complejo::operator <=(const Complejo a){
  return ((re_<a.re_)||(re_==a.re_ && im_<a.im_)||(re_==a.re_ && im_==a.im_));
}

bool Complejo::operator >=(const Complejo a){
  return ((re_>a.re_)||(re_==a.re_ && im_>a.im_)||(re_==a.re_ && im_==a.im_));
}

ostream& operator <<(ostream &o, Complejo &a){
  o << "(" << a.re_ << "," << a.im_ << "i)";
  return o;
}

istream& operator >>(istream &i, Complejo &a){
  cout << "Introduzca el valor que desee para la parte real: ";
  i >> a.re_;
  cout << "Introduzca el valor que desee para la parte imaginaria: ";
  i >> a.im_;
  i.ignore();
  return i;
}

float Complejo::get_re(void){
  return re_;
}

float Complejo::get_im(void){
  return im_;
}
