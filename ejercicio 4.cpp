/*Realice un programa que permita calcular y dar como salida el
promedio general de una sección, tomando en cuenta que está compuesta
por 10 estudiantes y que se tiene la nota de cada uno de ellos.*/

#include <iostream>
using namespace std;
#define MAX 10
float notas[MAX];
int indice = 0;

void addNotas(float nota)
{
    if (indice < MAX)
        notas[indice] = nota;
    else
        cout << "todas las notas han sido guardadas" << endl;
    indice++;
}

void promedio()
{
    float suma = 0;
    if (indice < MAX)
        cout << "faltan las notas de " << MAX - indice << " estudiantes" << endl;
    else
    {
        for (int i = 0; i < MAX; i++)
        {
            suma += notas[i];
        }
        float promedio = suma / MAX;
        cout << "el promedio de la clase es: " << promedio << endl;
    }
}

main()
{
    int opcion;
    float nota;
    cout << "1. agregar notas de estudiantes" << endl;
    cout << "2. calcular promedio de estudiantes" << endl;
    cout << "3. salir" << endl;
    cout << "escoja: ";
    cin >> opcion;

    switch (opcion)
    {
    case 1:
        cout << "\ncual es la nota del estudiante que quiere agregar? ";
        cin >> nota;
        addNotas(nota);
        break;
    case 2:
        promedio();
        break;
    case 3:
        cout << "saliendo..." << endl;
        break;
    default:
        cout << "opcion invalida..." << endl;
        break;
    }

    if (opcion != 3)
    {
        main();
    }
}