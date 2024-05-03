#include <iostream>
using namespace std;
//// Desarrollar un programa que imprima los números impares en orden descendente que hay entre 1 y 100.
void imprimir ()
{
    for (int i = 100; i > 0; i--)
    
    {
        if (i % 2!= 0)
        cout << i << endl;

    }
}

main(){
    cout << "imprimiendo... "<< endl;
    imprimir();
}