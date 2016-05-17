#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main()
{srand(time(0));
int contador,numero,contadorimpar,contadorpar;
contador=0;
numero=0;
contadorimpar=0;
contadorpar=0;
 {

while(contador<10)
{numero=1 + rand()%(100-1);
    contador++;
cout<<contador<<"...Numero..."<<numero<<"\n";
{if (numero%2)
   contadorimpar++;
else
    contadorpar++;
   }
}}cout<< "Numeros Pares:"<<contadorpar<<"\n";
cout<< "Numeros Impares:"<<contadorimpar<<"\n";
cout<<"Final del programa"<<"\n";

    system ("PAUSE");}
