#include <iostream>

using namespace std;

int main()
{
    char val;
    cout << "ingrese un numero por favor:"; cin >> val;

    if ((val>= 1000) && (val<=9999)){
        int a= val/ 1000 ;
        int b= a/100;
        int c= c/10;
        int d = c%10;
        cout << "ingrese un numero por favor:"; cin >> val;

        cout << a<< endl;

        cout << b<< endl;

        cout  <<c<< endl;

        cout  <<d<< endl;

    } else {
        cout <<" No es un numero de 4 digitos " << endl;
    }


    cout << "Hello world!" << endl;
    return 0;
}
