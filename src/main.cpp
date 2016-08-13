#include <cstdio>
#include <iostream>
#include <assert.h>

using namespace std;

#include "natural.hpp"
#include "entero.hpp"
#include "flotante.hpp"
#include "complejo.hpp"
#include "racional.hpp"

int main(void){

  bool menu = true;

  while(menu){
    int opc;

    cout << "-------------------------------------------------------" << endl;
    cout << "Practica 2: Implementacion de Tipos de Datos Numericos." << endl;
    cout << "-------------------------------------------------------" << endl;
    cout << "1. Natural." << endl;
    cout << "2. Entero." << endl;
    cout << "3. Real." << endl;
    cout << "4. Complejo." << endl;
    cout << "5. Racional." << endl;
    cout << "6. Salir." << endl;
    cout << endl;
    cout << "Por favor, elija la opcion que desee mostrar: ";
    cin >> opc;
    cout << endl;

    switch(opc){
      case 1:
      {
        Natural a=10,b=5,c;
        cout << "Las variables son: a=" << a << ", b=" << b << ", c=" << c << endl << endl;

        cout << "OPERACIONES ARITMETICAS" << endl << endl;

        // SUMA
        c=a+b;
        cout << "Suma: " << a << "+" << b << "=" << c << endl;

        // RESTA
        c=a-b;
        cout << "Resta: " << a << "-" << b << "=" << c << endl;

        // MULTIPLICACION
        c=a*b;
        cout << "Multiplicacion: " << a << "*" << b << "=" << c << endl;

        // DIVISION
        c=a/b;
        cout << "Division: " << a << "/" << b << "=" << c << endl;

        cout << endl;

        cout << "OPERADORES" << endl << endl;

        // IGUALACION
        a=b;
        cout << "Igualacion(=): a=b -> a=" << a << " y b=" << b << endl;

        // COMPARACION
        if(a==b)
          cout << "Comparacion(==): a==b -> Son iguales" << endl;
        else
          cout << "Comparacion(==): a==b -> No son iguales" << endl;

        // COMPARACION NEGATIVA
        if(a!=c)
          cout << "Comparacion(!=): a!=c -> No son iguales" << endl;
        else
          cout << "Comparacion(!=): a!=c -> Son iguales" << endl;

        // MENOR QUE
        if(a<b)
          cout << "Menor que(<): a<b -> a es menor que b" << endl;
        else
          cout << "Menor que(<): a<b -> a no es menor que b" << endl;

        // MAYOR QUE
        if(a>b)
          cout << "Mayor que(>): a>b -> a es mayor que b" << endl;
        else
          cout << "Mayor que(>): a>b -> a no es mayor que b" << endl;

        // MENOR O IGUAL QUE
        if(a<=b)
          cout << "Menor o igual que(<=): a<=b -> a es menor o igual que b" << endl;
        else
          cout << "Menor o igual que(<=): a<=b -> a no es menor o igual que b" << endl;

        // MAYOR O IGUAL QUE
        if(a>=b)
          cout << "Mayor o igual que(>=): a>=b -> a es mayor o igual que b" << endl;
        else
          cout << "Mayor o igual que(>=): a>=b -> a no es mayor o igual que b" << endl;

        cout << endl;

        cout << "OPERADORES DE ENTRADA/SALIDA" << endl << endl;

        cin >> c;
        cout << "El valor que acaba de introducir es: " << c << endl;

        cout << endl;
      }
      break;

      case 2:
      {
        Entero a=10,b=-15,c;
        cout << "Las variables son: a=" << a << ", b=" << b << ", c=" << c << endl << endl;

        cout << "OPERACIONES ARITMETICAS" << endl << endl;

        // SUMA
        c=a+b;
        cout << "Suma: " << a << "+" << b << "=" << c << endl;

        // RESTA
        c=a-b;
        cout << "Resta: " << a << "-" << b << "=" << c << endl;

        // MULTIPLICACION
        c=a*b;
        cout << "Multiplicacion: " << a << "*" << b << "=" << c << endl;

        // DIVISION
        c=a/b;
        cout << "Division: " << a << "/" << b << "=" << c << endl;

        cout << endl;

        cout << "OPERADORES" << endl << endl;

        // IGUALACION
        a=b;
        cout << "Igualacion(=): a=b -> a=" << a << " y b=" << b << endl;

        // COMPARACION
        if(a==b)
          cout << "Comparacion(==): a==b -> Son iguales" << endl;
        else
          cout << "Comparacion(==): a==b -> No son iguales" << endl;

        // COMPARACION NEGATIVA
        if(a!=c)
          cout << "Comparacion(!=): a!=c -> No son iguales" << endl;
        else
          cout << "Comparacion(!=): a!=c -> Son iguales" << endl;

        // MENOR QUE
        if(a<b)
          cout << "Menor que(<): a<b -> a es menor que b" << endl;
        else
          cout << "Menor que(<): a<b -> a no es menor que b" << endl;

        // MAYOR QUE
        if(a>b)
          cout << "Mayor que(>): a>b -> a es mayor que b" << endl;
        else
          cout << "Mayor que(>): a>b -> a no es mayor que b" << endl;

        // MENOR O IGUAL QUE
        if(a<=b)
          cout << "Menor o igual que(<=): a<=b -> a es menor o igual que b" << endl;
        else
          cout << "Menor o igual que(<=): a<=b -> a no es menor o igual que b" << endl;

        // MAYOR O IGUAL QUE
        if(a>=b)
          cout << "Mayor o igual que(>=): a>=b -> a es mayor o igual que b" << endl;
        else
          cout << "Mayor o igual que(>=): a>=b -> a no es mayor o igual que b" << endl;

        cout << endl;

        cout << "OPERADORES DE ENTRADA/SALIDA" << endl << endl;

        cin >> c;
        cout << "El valor que acaba de introducir es: " << c << endl;

        cout << endl;
      }
      break;

      case 3:
      {
        Flotante a=3.1415,b=-2.87,c=0.0;
        cout << "Las variables son: a=" << a << ", b=" << b << ", c=" << c << endl << endl;

        cout << "OPERACIONES ARITMETICAS" << endl << endl;

        // SUMA
        c=a+b;
        cout << "Suma: " << a << "+" << b << "=" << c << endl;

        // RESTA
        c=a-b;
        cout << "Resta: " << a << "-" << b << "=" << c << endl;

        // MULTIPLICACION
        c=a*b;
        cout << "Multiplicacion: " << a << "*" << b << "=" << c << endl;

        // DIVISION
        c=a/b;
        cout << "Division: " << a << "/" << b << "=" << c << endl;

        cout << endl;

        cout << "OPERADORES" << endl << endl;

        // IGUALACION
        a=b;
        cout << "Igualacion(=): a=b -> a=" << a << " y b=" << b << endl;

        // COMPARACION
        if(a==b)
          cout << "Comparacion(==): a==b -> Son iguales" << endl;
        else
          cout << "Comparacion(==): a==b -> No son iguales" << endl;

        // COMPARACION NEGATIVA
        if(a!=c)
          cout << "Comparacion(!=): a!=c -> No son iguales" << endl;
        else
          cout << "Comparacion(!=): a!=c -> Son iguales" << endl;

        // MENOR QUE
        if(a<b)
          cout << "Menor que(<): a<b -> a es menor que b" << endl;
        else
          cout << "Menor que(<): a<b -> a no es menor que b" << endl;

        // MAYOR QUE
        if(a>b)
          cout << "Mayor que(>): a>b -> a es mayor que b" << endl;
        else
          cout << "Mayor que(>): a>b -> a no es mayor que b" << endl;

        // MENOR O IGUAL QUE
        if(a<=b)
          cout << "Menor o igual que(<=): a<=b -> a es menor o igual que b" << endl;
        else
          cout << "Menor o igual que(<=): a<=b -> a no es menor o igual que b" << endl;

        // MAYOR O IGUAL QUE
        if(a>=b)
          cout << "Mayor o igual que(>=): a>=b -> a es mayor o igual que b" << endl;
        else
          cout << "Mayor o igual que(>=): a>=b -> a no es mayor o igual que b" << endl;

        cout << endl;

        cout << "OPERADORES DE ENTRADA/SALIDA" << endl << endl;

        cin >> c;
        cout << "El valor que acaba de introducir es: " << c << endl;

        cout << endl;
      }
      break;

      case 4:
      {
        Complejo a(2.1,3.4),b(1.1,1.1),c;
        cout << "Las variables son: a=" << a << ", b=" << b << ", c=" << c << endl << endl;

        cout << "OPERACIONES ARITMETICAS" << endl << endl;

        // SUMA
        c=a+b;
        cout << "Suma: " << a << "+" << b << "=" << c << endl;

        // RESTA
        c=a-b;
        cout << "Resta: " << a << "-" << b << "=" << c << endl;

        // MULTIPLICACION
        c=a*b;
        cout << "Multiplicacion: " << a << "*" << b << "=" << c << endl;

        // DIVISION
        c=a/b;
        cout << "Division: " << a << "/" << b << "=" << c << endl;

        cout << endl;

        cout << "OPERADORES" << endl << endl;

        // IGUALACION
        a=b;
        cout << "Igualacion(=): a=b -> a=" << a << " y b=" << b << endl;

        // COMPARACION
        if(a==b)
          cout << "Comparacion(==): a==b -> Son iguales" << endl;
        else
          cout << "Comparacion(==): a==b -> No son iguales" << endl;

        // COMPARACION NEGATIVA
        if(a!=c)
          cout << "Comparacion(!=): a!=c -> No son iguales" << endl;
        else
          cout << "Comparacion(!=): a!=c -> Son iguales" << endl;

        // MENOR QUE
        if(a<b)
          cout << "Menor que(<): a<b -> a es menor que b" << endl;
        else
          cout << "Menor que(<): a<b -> a no es menor que b" << endl;

        // MAYOR QUE
        if(a>b)
          cout << "Mayor que(>): a>b -> a es mayor que b" << endl;
        else
          cout << "Mayor que(>): a>b -> a no es mayor que b" << endl;

        // MENOR O IGUAL QUE
        if(a<=b)
          cout << "Menor o igual que(<=): a<=b -> a es menor o igual que b" << endl;
        else
          cout << "Menor o igual que(<=): a<=b -> a no es menor o igual que b" << endl;

        // MAYOR O IGUAL QUE
        if(a>=b)
          cout << "Mayor o igual que(>=): a>=b -> a es mayor o igual que b" << endl;
        else
          cout << "Mayor o igual que(>=): a>=b -> a no es mayor o igual que b" << endl;

        cout << endl;

        cout << "OPERADORES DE ENTRADA/SALIDA" << endl << endl;

        cin >> c;
        cout << "El valor que acaba de introducir es: " << c << endl;

        cout << endl;
      }
      break;

      case 5:
      {
        Racional a(4,8),b(16,4),c;
        cout << "Las variables son: a=" << a << ", b=" << b << ", c=" << c << endl << endl;

        cout << "OPERACIONES ARITMETICAS" << endl << endl;

        // SUMA
        c=a+b;
        cout << "Suma: " << a << "+" << b << "=" << c << endl;

        // RESTA
        c=a-b;
        cout << "Resta: " << a << "-" << b << "=" << c << endl;

        // MULTIPLICACION
        c=a*b;
        cout << "Multiplicacion: " << a << "*" << b << "=" << c << endl;

        // DIVISION
        c=a/b;
        cout << "Division: " << a << "/" << b << "=" << c << endl;

        cout << endl;

        cout << "OPERADORES" << endl << endl;

        // IGUALACION
        a=b;
        cout << "Igualacion(=): a=b -> a=" << a << " y b=" << b << endl;

        // COMPARACION
        if(a==b)
          cout << "Comparacion(==): a==b -> Son iguales" << endl;
        else
          cout << "Comparacion(==): a==b -> No son iguales" << endl;

        // COMPARACION NEGATIVA
        if(a!=c)
          cout << "Comparacion(!=): a!=c -> No son iguales" << endl;
        else
          cout << "Comparacion(!=): a!=c -> Son iguales" << endl;

        // MENOR QUE
        if(a<b)
          cout << "Menor que(<): a<b -> a es menor que b" << endl;
        else
          cout << "Menor que(<): a<b -> a no es menor que b" << endl;

        // MAYOR QUE
        if(a>b)
          cout << "Mayor que(>): a>b -> a es mayor que b" << endl;
        else
          cout << "Mayor que(>): a>b -> a no es mayor que b" << endl;

        // MENOR O IGUAL QUE
        if(a<=b)
          cout << "Menor o igual que(<=): a<=b -> a es menor o igual que b" << endl;
        else
          cout << "Menor o igual que(<=): a<=b -> a no es menor o igual que b" << endl;

        // MAYOR O IGUAL QUE
        if(a>=b)
          cout << "Mayor o igual que(>=): a>=b -> a es mayor o igual que b" << endl;
        else
          cout << "Mayor o igual que(>=): a>=b -> a no es mayor o igual que b" << endl;

        cout << endl;

        cout << "OPERADORES DE ENTRADA/SALIDA" << endl << endl;

        cin >> c;
        cout << "El valor que acaba de introducir es: " << c << endl;

        cout << endl;
      }
      break;

      case 6:
        menu = false;
      break;
    }
  }

  return 0;
}
