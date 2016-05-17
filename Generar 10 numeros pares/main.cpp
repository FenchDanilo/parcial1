#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main()
{srand(time(0));
int contador,numero;
contador=0;
 {
{while(contador<10)
{numero=rand()%(100-1);
if ((contador<11) and (numero%2==0))
cout<<contador<<"...Numero..."<<numero<<"\n";
contador++;
}}

cout<<"Final del programa"<<"\n";}}
