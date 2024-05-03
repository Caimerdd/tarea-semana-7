/*Implementa un programa que solicite al usuario ingresar una matriz y
luego calcule su transposición. La transposición de una matriz se
realiza intercambiando filas por columnas. Imprime la matriz transpuesta como salida.*/

#include <iostream>
using namespace std;
#define FILAS 5
#define COLUMNAS 5

int matriz[FILAS][COLUMNAS];
int transpuesta[FILAS][COLUMNAS];
int filas, columnas;

void ingresar(int filas, int columnas)
{
    int num;
    cout << endl;
    for (int x = 0; x < filas; x++)
    {
        for (int y = 0; y < columnas; y++)
        {
            cout << "ingresar numero en fila " << x + 1 << ", columna " << y + 1 << ": ";
            cin >> num;
            matriz[x][y] = num;
        }
    }
}

void transponer()
{
    for (int x = 0; x < filas; x++)
    {
        for (int y = 0; y < columnas; y++)
        {
            transpuesta[y][x] = matriz[x][y];
        }
    }

    cout << "matriz ingresada:" << endl;
    for (int x = 0; x < filas; x++)
    {
        cout << "[";
        for (int y = 0; y < columnas; y++)
        {
            if (y == columnas - 1)
            {
                cout << matriz[x][y] << "]" << endl;
            }
            else
            {
                cout << matriz[x][y] << ", ";
            }
        }
    }

    cout << "transposicion de matriz ingresada:" << endl;
    for (int x = 0; x < columnas; x++)
    {
        cout << "[";
        for (int y = 0; y < filas; y++)
        {
            if (
                    y == filas - 1)
            {
                cout << transpuesta[x][y] << "]" << endl;
            }
            else
            {
                cout << transpuesta[x][y] << ", ";
            }
        }
    }
}

main()
{
    int opcion;
    cout << "1. ingresar datos de matriz" << endl;
    cout << "2. transponer matriz" << endl;
    cout << "3. salir" << endl;
    cout << "escoja: ";
    cin >> opcion;

    switch (opcion)
    {
    case 1:
        cout << "ingresar cantidad de filas: ";
        cin >> filas;
        cout << "ingresar cantidad de columnas: ";
        cin >> columnas;
        ingresar(filas, columnas);
        break;
    case 2:
        transponer();
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