#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
int main()


{int numero;
    cout<<"Ingresar Numero  >";
    cin>> numero;
    if (numero%5==0)
    {
        cout <<"Numero divisible entre 5";
    }
    else {
        cout<< "Numero no divisible entre 5";
    }

    cout<<"/n";
    system("PAUSE");
    return 0;
}
