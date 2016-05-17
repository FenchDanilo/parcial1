#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main()
{srand(time(0));
int contador,numero,suma,mayor,menor;
contador=0;
suma=0;
mayor=0;
menor=100;
 {

while(contador<10)
{numero=1 + rand()%(100-1);
suma=suma+numero;//suma+=numero
   if(mayor<numero)
    mayor=numero;
    contador++;//contador=contador+1
  if(menor>numero)
      menor=numero;




cout<<contador<<"...Numero..."<<numero<<"\n";
}}
cout<<"Numero Menor.."<<menor<<"\n";
cout<<"Numero Mayor.."<<mayor<<"\n";
cout<<"Suma de los numeros es..."<<suma<<"\n";
cout<<"Final del programa"<<"\n";}
