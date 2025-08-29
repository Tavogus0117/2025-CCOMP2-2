#include <iostream>

using namespace std;

int main()
{
    char val;
    cout << "ingrese un caracter por favor:"; cin >> val;

    cout << "El caracter ingresado es: " << val << endl;
    int num = static_cast<int>(val);
    cout << "El valor numerico es: " << num << endl;


    /**
    Escribir un programa que indique si el valor ingresado es una letra mayuscula
    */

    if (num>= 65 && num<= 90){
        cout <<"La letra " << val << " es una mayuscula" << endl;
    }else{
        cout <<"La letra " << val << " no es una mayuscula " << endl;
    }

    /** Escribir un programa que indique si el valor ingresado es una letra mayuscula o una letra minucula
    return 0;
    */
    if (num>=65 && num<=90){
        cout <<"La letra " << val << " es una letra mayuscula" << endl;

    } else if(num>=97 && num<=122) {
        cout <<"La letra " << val << " es una letra minuscula" << endl;
    } else {
        cout <<"No es una letra" << endl;
    }
    /** Escribir un programa que indique si el valor ingresado es un numero
    */
    if (num>=48 && num<=57){
        cout <<"es un numero" << endl;
    } else{
        cout <<"no es un numero" << endl;
    }

    return 0;


}
