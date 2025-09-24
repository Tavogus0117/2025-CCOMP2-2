#include <iostream>

using namespace std;
/** IMPLEMENTE UNA FUNCION PARA INVERTIR LOS ELEMENTOS DE UN ARREGLO
*/
void intercambio(int &a, int &b)
{
    int tmp= a;
    a=b;
    b=tmp;

}


void invertir(int arr[], int tam)
{
    for(int i=0, j = tam -1; i<j ; i++,j-- )
    {
        intercambio(arr[i], arr[j]);
    }
}

void print(int arr[], int tam)
{
    cout << "[";
    for (int i = 0; i < tam ; i++)
        cout << arr[i] << " ";
    cout << "]";
}

void recursivo(int arr[], int tam, int i= 0)
{
    if(i > tam)
    {
        return ;
    }else
    {
        intercambio(arr[i], arr[tam-1]);
        recursivo(arr, tam-1, i+1);
    }
}


int main()
{
    int arr[] = {10, 20, 30, 40, 50};

    print(arr, 5);
    cout <<endl;

    invertir(arr,5);
    print(arr,5);
    cout <<endl;

    recursivo(arr,5);
    print(arr,5);
    return 0;


}
