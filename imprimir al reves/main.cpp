#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main ()
{
int numero;

cin >> numero;

if ((numero > 99) and (numero <=999 ))
{

for (; numero != 0; numero /= 10)
cout << numero % 10;
}

else
cout << "Numero no es de 3 digitos";
cout<<"\n";


system("PAUSE");
}
