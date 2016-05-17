#include <iostream>
#include <stdlib.h>
using namespace std;
//ingresar un numero de hasta 4 cifras...si es mayor el programa debera escribir cuantas cifras tiene el numero
int main()
{ int numero;
    cout << "Ingresar Numero ...";
    cin>>numero;

    if (numero<0 )
        numero*=(-1);// multiplicar por -1

    if ((numero>0) and (numero<10))
       {

        cout << "Tiene 1 cifra ";
        }
    else if ((numero>9) and (numero<100))
        {cout << "Tiene 2 cifras " ;
        }
    else if ((numero>99) and (numero<1000))
        {cout << "Tiene 3 cifras " ;
        }
    else {cout << "Tiene 4 o mas de 4 cifras";
    }
    cout <<"\n";
    system("PAUSE");
}
