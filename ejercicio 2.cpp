#include <iostream>
using namespace std;
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