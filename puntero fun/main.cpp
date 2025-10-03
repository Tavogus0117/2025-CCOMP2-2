#include <iostream>

using namespace std;
/*
void prinArray(int *arr, int size)
{
    cout << "[";
    for (int i=0; i< size; i++, arr++)
    {
        cout << *arr << " ";

    }
    cout << "]" << endl;
}

void intercambio(int *a, int *b)
{
    int tmp= *a;
    *a = *b;
    *b = tmp;
}
/**
*Impletemente una funcion para invertir los elementos de un arreglo.

*/
/*

void invertirArray(int *ini, int *fin)
{
    while (ini< fin)
    {
        intercambio(ini,fin);
        ini++;
        fin--;
    }
}

void recursivo(int *ini, int *fin) // usando punteros y recursividad
{
    if (ini> fin)
    {
        return;
    }else
    {
        intercambio(ini, fin);
        recursivo(++ini, --fin);
    }
}

int main()
{
    int arr[] = {1,2,3,4,5};
    int tam = sizeof(arr)/ sizeof(arr[0]); // sizeof => Se le esta enviando una direccion de memoria al primer elemento
    prinArray(arr, tam);
    cout << endl;

    int x= 10;
    int y= 20;

    intercambio(&x,&y);

    cout << "a = " << x << endl;
    cout << "b = " << y << endl;

    cout << endl;

    invertirArray(arr, arr+tam-1);
    prinArray(arr, tam);
    cout << endl;

    recursivo(arr, arr+tam-1);
    prinArray(arr, tam);
    return 0;

}
*/
int contarCaracter(char *ptr, int char)
{
}
int main()
{
    char cad[] = " Ciencia de la computacion";
    cout << contarCaracter( cad, " ");
    return 0;
}


