#include <iostream>

using namespace std;


/**
 * OPERADOR new
 * sirve para reservar memoria para una variable/objeto
 * --------------------------------------------------------------
 * OPERADOR delete
 * sirve para liberar la memoria de una varaiable/ obejto
*/

int* fun()
{
    int* ptr = new int;  // se guarada en la meoria
    *ptr = 10;
    return ptr;
}

int main()
{
    int *ptr = fun();
    cout << *ptr << endl;  // imprime, no ocurre error

    delte ptr; // para borrar de la memoria


    /*
    int* ptr;
    if (true)
    {
        int x= 10;
        ptr = &x;
    }
    cout << *ptr << endl;
    return 0;
    */
}

//------------------------------------------------------------------------------------------------




int sumaArray( int *ptr, int tam)
{
    int sum =0;
    for(int i=0; i< tam; sum+=(i++));
    return sum;
}

int sumaArrayRec(int *ptr, int tam)
{
    if (tam ==0)
    {
        return 0;
    }else
    {
        return *ptr + sumaArrayRec(++ptr,--tam);
    }
}

/**
 * Implementar un algoritmo de ordenamiento de burbuja
 * insertior short
 * mergesort
 * quicksort

*/

void intermcambio(int &a, int &b)
{
    int tmp= a;
    a = b;
    b = tmp;
}

void burbuja(int *ptr, int tam)
{

    for(int i=0; i< tam-1 ; i++ )
    {
        for (int j = 0; j < tam-1 ;j++ )
        {
            if ( ptr[j] > ptr[j+1])
            {
                intermcambio(ptr[j],ptr[j+1]);

            }
        }
    }
}






int main()
{

    int tam =5;
    int *ptr = new int{tam}; // se crea en la memoria
    int suma=0;
    for(int i =0; i< tam ; i++)
    {
        ptr[i] = i;
    }
    for(int i =0; i< tam; i++)
    {
        cout << ptr[i] << " ";
    }
    cout << endl;

    cout << " la suma es: " << sumaArray(ptr, tam)<< endl;
    cout << " la suma recursiva es : " << sumaArrayRec(ptr, tam) << endl;

    cout << "metodo de la burbuja " << burbuja(ptr, tam) << endl;

    delete[] ptr; // se borra

    return 0;
}
