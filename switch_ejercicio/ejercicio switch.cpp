#include <iostream>

using namespace std;

int main()
{

    int opcion;
    float r1, r2, suma, resta, multiplicacion,division;
    cout << "MENÚ" << endl;
    cout << " 1 SUMAR" << endl;
    cout << "2 RESTAR" << endl;
    cout << "3 MULTIPLICAR" << endl;
    cout << "4 DIVIDIR" << endl;
    cout << "ELEGIR OPCION DEL MENU" << endl;
    cin >> opcion;

    switch (opcion)
    {
        case 1:

        cout<<"ingresar primer numero";
        cin>>r1;
        cout<<"ingresar segundo numero";
        cin>>r2;
        suma= r1+r2;
        cout<< "la suma es"<<suma;
        break;

        case 2:

        cout<<"ingresar primer numero";
        cin>>r1;
        cout<<"ingresar segundo numero";
        cin>>r2;
        suma= r1-r2;
        cout<< "la resta es"<<resta;
        break;

        case 3:

        cout<<"ingresar primer numero"<<endl;
        cin>>r1;
        cout<<"ingresar segundo numero";
        cin>>r2;
        suma= r1*r2;
        cout<< "la multiplicacion es:"<<multiplicacion;
        break;


        case 4:

        cout<<"ingresar primer numero";
        cin>>r1;
        cout<<"ingresar segundo numero";
        cin>>r2;
        suma= r1/r2;
        cout<< "la division:"<<division;
        break;
        default:cout<< "opcion invalida";


    }
}