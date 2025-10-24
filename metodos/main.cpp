#include <iostream>

using namespace std;

/**
 * Implementar un algoritmo de ordenamiento de burbuja
 * insertior short
 * mergesort
 * quicksort

*/

void imprimir( int *ptr, int tam)
{
    for( int i= 0; i< tam ; i++)
    {
        cout << ptr[i] << " ";
    }
}
void intercambio(int &a, int &b)
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
                intercambio(ptr[j],ptr[j+1]);

            }
        }
    }
}

void insertion_sort( int *ptr, int tam)  // [4,3,2,1,0] ,  [2;4;8;1;0]
{
    for (int i=0; i< tam; i++)
    {
        int j = i;
        while( (j > 0) && (ptr[j-1] > ptr[j]))
        {
            intercambio(ptr[i], ptr[i-1]);
            j--;
        }
    }

}

void quicksort(int *ptr, int tam)
{
    if (tam <= 1)
    {
        return;
    }

    int pivote = ptr[tam - 1];
    int i = 0;

    for (int j = 0; j < tam - 1; j++)
    {
        if (ptr[j] <= pivote)
        {
            intercambio(ptr[i], ptr[j]);
            i++;
        }
    }

    intercambio(ptr[i], ptr[tam - 1]);

    quicksort(ptr, i);
    quicksort(ptr + i + 1, tam - i - 1);
}

void mergesort(int *ptr, int tam)
{
    if (tam <= 1) return;

    int medio = tam / 2;
    mergesort(ptr, medio);
    mergesort(ptr + medio, tam - medio);

    // Fusionar
    int *temp = new int[tam];
    int i = 0, j = medio, k = 0;

    while (i < medio && j < tam) {
        if (ptr[i] <= ptr[j]) {
            temp[k++] = ptr[i++];
        } else {
            temp[k++] = ptr[j++];
        }
    }

    while (i < medio) temp[k++] = ptr[i++];
    while (j < tam) temp[k++] = ptr[j++];

    for (int i = 0; i < tam; i++) ptr[i] = temp[i];
    delete[] temp;
}

int main()
{

    int tam =5;
    int *ptr = new int[tam]; // se crea en la memoria


    // inversa
    for(int i = 0; i < tam; i++)
    {
        ptr[i] = tam - 1 - i;
    }

    //IMPRIMIR
    imprimir( ptr, tam);
    cout << endl;

    cout << "METODO DE LA BURBUJA  " << endl;

    burbuja(ptr, tam);
    imprimir (ptr, tam);
    cout << endl;

    cout << "METODO INSERTION SORT " << endl;
    insertion_sort(ptr, tam);
    imprimir (ptr, tam);
    cout << endl;

    cout<< "METODO QUICKSORT" << endl;
    quicksort(ptr,tam);
    imprimir(ptr,tam);
    cout << endl;

    cout<< "METODO  MERGESORT" << endl;
    mergesort(ptr,tam);
    imprimir(ptr,tam);

    delete[] ptr; // se borra

    return 0;
}
