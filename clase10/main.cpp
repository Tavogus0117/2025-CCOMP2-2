
#include <iostream>
#include <math.h>

using namespace std;
//ESCRIBA UN PROGRAMA QUE PIDA UN NUMERO (3 a 9 DIGITOS9 Y EVALUAR SI DICHO NUMERO ES UN POLINDROMO:
                                         // EJEMPLO 123321
//usando while y for para los palindromos
// para numero primo while y for
// para los primeros while for

// practicar while y for

int main()
{
    long n;
    cout << "Ingrese un numero: "; cin>>n;

    int numC = n ;
    int numDig = 0;
    while(numC > 0)
    {
        numC /= 10;
        numDig++;
    }

    while(n != 0)
    {
        int ini = n/ pow(10, numDig-1);
        int fin = n % 10;

        if (ini != fin)
        {
            cout<<"no es palindromo"<< endl;
            break;
        }
        n = (n % static_cast<int>(pow(10, numDig-1))) /10;
        numDig -=2;
        cout << ini<< endl;
        cout << fin << endl;
        cout << n <<  endl;


    }


    return 0;
}
