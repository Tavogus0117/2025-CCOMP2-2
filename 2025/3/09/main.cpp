#include <iostream>

using namespace std;
//
/*
int main()
{
    int c=1;
    while(c<=10)
    {
        cout<<c<<endl;
        c=c+1;
    }

    cout<<endl;
    int i=9;

    while (i>=1)
    {
        cout<<i<<endl;
        i=i-1;
    }
    //imprimir multiplos menos de 100

    cout<<endl;
    int d=3;
    while (d<=100)
    {
        cout<<d<<" ";
        d=d+3;
    }
    return 0;
}*/

// implemente un programa que solicite un numero por teclado e indique si dicho numero es un numero "primo"
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

}
*/

//implemente un programa que solicite un numero por teclado e imprima los numeros
//primos menores que dicjo numero usando While

int main()
{
    int n;
    cout<<"ingresar numero "; cin>>n;
    int a=0;
    while (a>=2)
    {
        int a=a-1;
        int i=1;
        int d=0;

        while (i<=n)
        {
            if (n%i==0)
            {
                cout<<d<<endl;
                d++;

            }
                cout<<d<<endl;
                i++;


        }
        cout<<d<<endl;

    }
    return 0;

}

