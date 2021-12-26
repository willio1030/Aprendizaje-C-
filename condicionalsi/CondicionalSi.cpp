#include <iostream>

using namespace std;

int main()
{

    int n1, n2, n3, mayor;


    cout << "ingresar numero 1\n";
    cin >> n1;

    cout << "ingresar numero 2\n";
    cin >> n2;

    cout << "ingresar numero 3\n";
    cin >> n3;

    if (n1 > n2)
    {

        if (n1 > n3)
        {

            mayor = n1;
        }
        else
        {

            if (n2 > n1)
            {

                mayor = n2;
            }
            else
            {

                if (n3 > n1)
                {
                    if (n3 > n2)
                    {
                        mayor = n3;
                    }
                }
                else
                {
  
                    mayor = mayor;
                }
            }

        }


        cout << "el numero mayor es " << mayor;
    }

    
    
}



