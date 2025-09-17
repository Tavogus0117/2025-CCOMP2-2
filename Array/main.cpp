#include <iostream>

using namespace std;
/*
int main()
{
    string cad = "ciencia de la computacion";
    char car= 'i';
    int cont= 0;

    for ( int i=0; i<cad.length() ; i=i+1)
    {
        if (cad.at[i] == car)
        {
            cont++;
        }

    }
    cout << cont << endl;
}
*/

///Da una cadena y verificar si dicha cadena es un palindromo / con while
/*
int main()
{
    int i=0;
    string cad = "reconocer";
    int j = cad.length()-1;
    bool esPalindromo = true;

    while (i<j)
    {
        if (cad.at(i) != cad.at(j))
        {
            esPalindromo = false;
            break;
        }
        i++;
        j++;
    }

    if (esPalindromo)
    {
        cout<< "es palindromo" << endl;
    }else
    {
        cout<<"no es palindromo" << endl;
    }
}
*/
///Da una cadena y verificar si dicha cadena es un palindromo / con for








///Implemente una funcion e intercambie sus valores

void intercambiar(int a, int b)
{
    char temp= a;
    a = b;
    b = temp;
    cout << a<< " " << b << endl;
}

int main()
{
    int x=10;
    int y=20;
    cout << intercambiar(x,y)<< endl;
}
