#include <iostream>

using namespace std;
/**
*Recursividad: Cuando una funcion se llama asi misma
* n!=(n-1)!
*5! = 5 * (4)!
*          4* (3)!
*              3* (2)!
*                   2 *
*


*/
/*
long long factorial (long = n)
{
    if (n==1)
    {
        return 1;
    }
    else
    {
        return n*factorial(n-1);
    }
}
int main()
{
    cout << factorial(5) << endl;
    return 0;
}

*/
/** Fibonachi
 *  Fib(n) = fib(n-1) + fib (n-2)
 *          fib(0)= 1
 *          fib(1)= 1
 *
*/
/*
long long fibonachi(long n)
{
    if (n==1 || n==0)
    {
        return 1;
    }else{
        return fibonachi (n-1) + fibonachi(n-2);
    }
}


int main ()
{
    cout << fibonachi(6) << endl;
    cout << fibonachi(2) << endl;
    return 0;
}

*/

/** dame cuantos numeros tiene un digito
 * ejemplo 400 = 4
*/

/*
int recursion(int n)
{

    if (n<=9)
    {
        return 1;
    }else{
        return 1 + recursion(n/10);
    }
}

int main()
{
    cout << recursion(485)<< endl;
}

*/


/** Determinar si un numero es capicua
*/
/*
int PrimerDigito(n)
{
    if (n>=9){
        return n;
    } else {
        return PrimerDigito(n/10 )
    }
}
int capicua(int j)
{

    if (j<=10)
    {


    } else {
        return 0;
    }
}

int main()
{
    cout << capicua(323);
}
*/

/** array
*/
int main ()
{
    int arr[5];

    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;
    cout << arr[0] << endl;
    cout << arr[1] << endl;
    cout << arr[2] << endl;
    cout << arr[3] << endl;
    cout << arr[4] << endl;

    int suma = 0;
    for ( int i = 0; i < 5 ; i++)
    {
        suma = suma + arr[i];SS
    }
    cout << " La suma es : " << suma << endl;
    return 0 ;

}


/** Implemente una funcion que reciba un arreglo de enteros y su tamaño retorne
* la suma suma de los elementos del arreglo

lon sima
