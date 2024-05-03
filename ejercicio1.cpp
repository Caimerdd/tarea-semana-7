/* Dado un número natural n se desea calcular la suma de los números naturales desde 1 hasta n*/

#include <iostream>
using namespace std;

void sumar (int numero)
{
    int suma =0;
    if (numero < 1)
    {
        cout << "Respuesta invalida" << endl;
    }
    else
    {
        for (int i = 1; i <= numero; i++)
        {
            suma += i;
        }

    }
    cout << " la suma de los numeros naturales de 1 hasta " << numero << " es " << suma <<  endl;
}
main ()
{
    int num;
    cout << "Digie el numero hasta el que desea sumar: " << endl;
    cin >> num;
    sumar (num);
}