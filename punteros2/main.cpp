#include <iostream>

using namespace std;

int main()
{
    int* ptr1;
    int x = 10;
    ptr1 = &x;

    cout << endl;
    cout << *ptr1 << endl;

    *ptr1 = 1000;  // Se cambio el valor de X
    cout << x << endl;

    int* ptr2 = &x;
    *ptr2 = 5000;
    cout << x << endl;
    cout << *ptr1 << endl;
    cout << *ptr2 << endl;
    cout << endl;

    double* ptr3;
    double z = 0.154324324;

    ptr3 = &z;

    cout << *ptr3 << endl;

    *ptr3 = 3,14;
    cout << *ptr3 << endl;


    return 0;
}
