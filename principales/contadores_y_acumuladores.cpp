#include <iostream>

using namespace std;

/* contadores y acumuladores

un contador es:


 una variable cuyo valor se incrementa o 
decrementa en una cantidad constante o de uno en uno
cada vez que se ejecuta un procesosirve para llevar la cuenta
de determinadas acciones que se pueden llevar a cabo en un 
proceso 

para determinar una variable de tipo contador se inicializa con
el valor 0 (int contador=0;) para determinarla como varible
contadora 

 sintaxis

 Incremento

 para el contador es la siguiente: Contador=Contador + Valor_Fijo

siempre y cuando la condición sea verdadera 


Decremento 

por el contrario si es falsa el contadore restara la
misma unidad en este caso 1
seria contador = contador -1


acumulador 

es una variable que almacena cantidades resultantes 
de las sumas de cada iteracion

sintaxis

acumulador = acumulador + variable 




*/

int main()
{

    int a1;
    int a2;
    int a3;
    int contador = 0;

    cout << "digite un numero1" << endl;
    cin >> a1;

    cout << "digite un numero2" << endl;
    cin >> a2;

    cout << "digite un numero3" << endl;
    cin >> a3;

    if (a1 > a2)
    {

        if (a1 > a3)
        {
            contador = contador + 1;
        }
    }
    else
    {
        if (a2 > a1)
        {
            contador = contador + 1;
        }
    }
    cout << "el valor es\n"
         << contador;
    return 0;
    cout << "el valor es\n"  << contador;
}