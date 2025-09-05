#include <iostream>

using namespace std;

//implemente un programa que solicite un numero por telcado e indique se dicho numero es un numero primo
/*
int main()
{
    long long n, i=2, d=0; cin>>n;

    while (i*i<=n )
    {
        if (n+i ==0)
        {
            d++;
            break;
        }
        i++;
    }
    cout<<( (d==0)? "primo": "no primo " );
    return 0;

}
*/
// implemente un programa que solicite un numero por teclado e indique si dicho numero es un numero "primo"
// Mejorar el codigo, demora mucho
/*
int main()
{

    long long n, i=1, d=0;
    cout<<"ingresar numero "; cin>>n;
    while (i<=n)
    {
        if (n%i==0)
        {
            d++;
        }
        i++;
    }
    cout<<( (d==2)? "primo" : "no primo");
    return 0;

}*/
//implemente un programa que solicite un numero por teclado e imprima los numeros
//primos menores que dicjo numero usando While


// VER EL CODIGO
/*
int main()
{
    long long n,j=2, d=0, i=2;  cin>>n;
    while (j<=n)
    {
        if (j==2){
            cout<<"2 ";
            j++;
            continue;
        }
        while (i*i<=j ){
            if (j+i ==0){
            d++;
            }
            if (d>0) break;
            i++;
        }
        if (d>0)
            cout <<j<<" ";
        d=0; j=2;
        j++;
    }
    return 0;
}
*/

// probando la sentencia break
/*
int main()
{
    int i=1;
    cout<<" Probando la sentencia break" << endl;
    while (i<=10)
    {
        if (i==5)
        {
            break;
        }

        cout <<i<< endl;
        i= i+1;
    }
*/
// continue: salta a la siguiente iteracion
/*
    int j=0;
    cout <<"Probando la sentencia 'continue'"<< endl;
    while (j<10)
    {
        j=j+1;
        if (j==5)
        {
            continue;
        }
        cout << j << endl;
        j=j+1;
    }
    return 0;
}
*/

//IMPLEMENTE UN PROGRAMA QUE SOLICITE UN NUMERO E IMPRIMA LOS NUMEROS MENOS QUE DICHO NUMERO

int main()
{
    long long n, j=2, d=0, i=2; cin>>n;
    while (j<=n)
    {
        while (i*i<=j)
        {
            if (j%i ==0)
            {
                d++;
                break;
            }
            i++;
        }
        if (d==0)
            cout<<j<<" ";
        d=0, i=2 ;
        j++;
    }
    return 0;
}




