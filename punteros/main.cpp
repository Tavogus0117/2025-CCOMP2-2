#include <iostream>

using namespace std;

/**
*PUNTEROS => Es una variable que almacena "direcciones de memoria" de otra variable del mismo tipo
------------------------------------------------------------------------------------------------
 Declaraciones de puntero
        => Tipo_de_DATO* Nombre_del_puntero
-------------------------------------------------------------------------------------------------
 OPERADOR DE DIRECCION (&)
        => Sirve para obtener la direccion de memoria de una variable/objeto.
        => Operador unario. Ejm &var -> Retorna la direccion de la variable var.
--------------------------------------------------------------------------------------------------
 OPERADOR DE INDIRECCION (*)
        => Sirve para obtener el valor de una direccion de memoria
        => Operador unario. Ejm *ptr -> Retorna el valor de la direccion de memoria que tiene ptr
*/

int main()
{
    int* ptr1; // declarando la variable de tipo puntero a enter

    int x; // declarando la variable x
    x=10; // Inicializando la variable x con el valor 10

    ptr1 = &x;

    cout << endl;
    cout << "Direccion de la variable x es: "<< &x << endl;
    cout << "Direccion de la variable x es: "<< ptr1 << endl;
    cout << "El valor de la direccion de la variable x es: "<< *ptr1 << endl;
    cout << endl;


    int y = 20;

    ptr1 = &y;

    cout << "Direccion de la variable y es: "<< ptr1 << endl;
    cout << "El valor de la direccion de la variable ptr es: "<< *ptr1 << endl;
    cout << endl;

    int z=100;
    ptr1 = &z;

    cout << "Direccion de la variable z es: "<< ptr1 << endl;
    cout << "El valor de la direccion de la variable ptr es: "<< *ptr1 << endl;
    cout << endl;

    int* ptr2;
    ptr2 = &z;

    if (ptr1 == ptr2)
    {
        cout<< "prt y ptr2 tienen el mismo valor " << endl;
    }else
    {
        cout<< "no tiene el mismo valor "<< endl;
    }

    return 0;
}






