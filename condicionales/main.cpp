#include <iostream>

using namespace std;

int main()
{
    /** CONDICIONAL IF
      *
        IF (CONDICION) IF {
            // SENTENCIA A. SE EJECUTA SI LA CONDICION ES VERDADERA
        } else {
            // SENTENCIA B. SE EJECUTA SI LA CONDICION ES FALSA
        }
        -OPERADORES DE COMPARACION:
        > mayor que
        < menor que
        >= mayor o igual que
        <= menos o igual que
        == identico a
        != diferente a
        -OPERACIONES LOGICOS
        && = AND
        || = OR
        != negacion
        EJEMPLO: a= 10, b=5
                    (a>b) -> true
                    (a<3 -> false
                    (a==8) -> false
                    (a != 5) -> true
                    (a >= 10) && b < 10) -> true
                    (a< 6 || b==5 )-> true
    */
    int a = 15;
    int b = 5;

    if(a>5) {
        cout <<"El n�mero " << a << " es mayor que 5" << endl;
    }else{
        cout <<"El n�mero " << a << " no es mayor " << endl;

    }

    if(a>5 || a<15) {
        cout <<"Tu numero esta en el rango " << endl;
    }else{
        cout <<"Tu n�mero no esta en el rango " << endl;

    }

    return 0;
}
