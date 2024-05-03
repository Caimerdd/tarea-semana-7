/*Para un grupo de clase de 8 estudiantes, realice un programa
que permita calcular y dar como salida lo siguiente:
- Cantidad de alumnos aprobados
- Cantidad de alumnos reprobados
- Promedio general del grupo*/

#include <iostream> 
using namespace std;

#include <iostream>
using namespace std;
#define MAX 8
int notas[MAX];
int indice = 0;

void addNota(float nota)
{
    if (indice < MAX)
        notas[indice] = nota;
    else
        cout << "todas las notas han sido guardadas" << endl;
    indice++;
}

void aprobar()
{
    int aprobados = 0;
    int reprobados = 0;
    for (int i = 0; i < MAX; i++)
    {
        if (notas[i] > 70)
        {
            aprobados++;
        }
        else
        {
            reprobados++;
        }
    }

    cout << endl
         << aprobados << " estudiantes aprobaron la clase" << endl;
    cout << reprobados << " estudiantes reprobaron la clase" << endl;
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
    cout << "2. mostrar cuantos estudiantes aprobaron y reprobaron" << endl;
    cout << "3. calcular promedio de estudiantes" << endl;
    cout << "4. salir" << endl;
    cout << "escoja: ";
    cin >> opcion;

    switch (opcion)
    {
    case 1:
        cout << "cual es la nota del estudiante que quiere agregar? ";
        cin >> nota;
        addNota(nota);
        break;
    case 2:
        aprobar();
        break;
    case 3:
        promedio();
        break;
    case 4:
        cout << "saliendo..." << endl;
        break;
    default:
        cout << "opcion invalida..." << endl;
        break;
    }

    if (opcion != 4)
    {
        main();
    }
}