#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main()
{srand(time(0));
int contador,numero,divisible;
contador=0;
divisible=0;
 {
while(contador<10)
{numero=1 + rand()%(100-1);
contador++;
if (numero%5==0)
    divisible++;

 cout<<contador<<"...Numero..."<<numero<<"\n";
}}
cout<<"Respuesta:""\n";
cout<<divisible<<"Numeros divisbles entre 5""\n";
cout<<"Final del programa"<<"\n";}
