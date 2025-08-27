#include <iostream>

using namespace std;

int main()
{
    // para caracteres se usan comillas simples
    char car ='6';

    int val = static_cast<int>(car);

    cout << sizeof(car) << endl; // numero de bytes

    int result = val - '0';
    cout << "el valor entero es: " <<val << endl; // tabla caracter aski
    cout << result <<endl;




    return 0;
}
