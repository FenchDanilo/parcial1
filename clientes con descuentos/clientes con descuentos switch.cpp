#include <iostream>
#include <stdlib.h>
using namespace std;
int cliente,producto,precio;
float subtotal,total;
int main()
{ cout <<"Ingresar tipo de cliente :";
  cin >> cliente;

cout <<"Ingresar cantidad del producto :";
  cin >> producto;

 cout <<"Ingresar  precio :";
  cin >> precio;

  subtotal= producto*precio;

 cout<<"Subtotal:" <<subtotal<< "\n";

switch (cliente)
{ case 1:
    total= subtotal-(subtotal*0.07);
    cout << "Total es:"<<total<< "\n";
    break;
  case 2:
      total= subtotal-(subtotal*0.08);
      cout <<"Total es:"<<total<< "\n";
      break;
  case 3:
      total= subtotal-(subtotal*0.10);
     cout << "Total es:"<<total<< "\n";
     break;

default:
cout <<"Tipo de cliente incorrecto, Ingrese cliente del 1-3";
 break;

   } cout <<"\n";
    system("PAUSE");
}
