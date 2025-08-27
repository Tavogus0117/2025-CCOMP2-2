#include <iostream>

using namespace std;

int main()
{
    /**
    los tipos de datos para manejar ENTEROS son:
    -short ( en memoria ram ocupa 2 bytes)
    -int - long ( en memoria ram ocupa 4 byts )
    -long long ( en memoria ram ocupa 8 bytes)
    */
    long long val1 = 1;
    short val2 = 10;
    unsigned short val3 = 65539;

    cout << sizeof( val1 )  << endl;
    cout << sizeof( val2 )  << endl;
    cout << "-" << endl;
    cout << "el valor es " << val3 << endl;
    val3 = val3 + 1;
    cout << "el valor es " << val3 << endl;
    val3 = val3 + 1;
    cout << "el valor es " << val3 << endl;

    /**
    SHORT
         2 bytes
        1 byte = 8 bytes
        1 bytes = 16 bytes

        2 en binario es -> 010
        3 en binario es -> 011
        4 en binario es -> 100
        ...
        10 en binario es -> 1010
        ...
        255 en binario es -> 11111111
        256 en binario es -> 00000001 00000000
        65535 en bianrio es -> 11111111 11111111




    */




    return 0;
}
