#include <iostream>

using namespace std;
/**
El nombre de un arreglo es un puntero al primer elemento del arreglo
---------------------------------------------------------------------------------------------------------
ARITMETICA DE PUNTEROS
    => A los punteros se les puede incrementar/decrementar usando los operados ++/--, respectivamente

*/

int main()
{
    int arr[] = {1,2,3,4,5};
    cout << arr << endl;
    cout << &arr[0] << endl;
    cout << &arr[1] << endl;
    cout << &arr[2] << endl;
    cout << &arr[3] << endl;
    cout << &arr[4] << endl;
    cout << endl;
    cout << endl;

    int* ptr = arr;

    cout << *ptr << endl; //1
    ptr++;
    cout << *ptr << endl; //2
    ptr++;
    cout << *ptr << endl; //3
    ptr++;
    cout << *ptr << endl; //4
    ptr++;
    cout << *ptr << endl; //5
    ptr++;
    cout << endl;

    // Por lo tanto, se puede recorrer los elementos de un arreglo usando un puntero.


    int* ptr2 = arr;
    for (int i=0; i<5; i++, ptr2++)
    {
        cout << *ptr2 << " ";

    }

    return 0;




}
