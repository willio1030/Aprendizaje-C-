/* para crear una archivo en c++ con visual estudio code 
creamos un nuevo archivo con la extension. cpp */
#include <iostream>
/* las directivas de preprocesador son instrucciones 
que se deben ejecutar antes de que el programa compile

la biblioteca <iostream> se utiliza para mostrar e ingresar datos
y la palabra  #include se utilia para el llamado de los datos 


dentro de ellas existen dos directivas de preprocesador
las de preprocesador macro
 

/* #DEFINE: con esta directiva podemos contener una función 
que se repite a modo de macro dentro del codigo por ejemplo 
el caso de std ya borramos toda la  instruccion using name 
space tendriamos que ingresar :: std en cada instruccion

#INCLUDE: se utiliza para incluir bibliotecas o un archivo
especifico

 */

using namespace std;

// toda linea de codigo en c++ termina con ;//

int main()
{

    int variable = 20, variable1 = 1;
    float reales = 1.3, real1 = 3;
    char caracter = 'b';
    //String palabra = "arvey";
    bool variable9 = false, variable6 = true;
    const float pi = 3.1416;
    float condicionalsi = 0, nota = 0, nota1 = 0;
    int n1, n2, n3, mayor;

    cout << variable << '\a' << " " << variable1 << endl;
    cout << variable << '\b' << " " << variable1 << endl;
    cout << variable << '\f' << " " << variable1 << endl;
    cout << variable << '\n'
         << " " << variable1 << endl;
    cout << variable << '\t' << " " << variable1 << endl;
    cout << variable << '\v' << " " << variable1 << endl;
    cout << variable << '\\' << " " << variable1 << endl;
    cout << variable << '\?' << " " << variable1 << endl;
    cout << variable << '\'' << " " << variable1 << endl;
    cout << variable << '\"' << " " << variable1 << endl;
    cout << variable << '\000' << " " << variable1 << endl;
    cout << variable << '\0' << " " << variable1 << endl;
    cout << reales << '\a';
    cout << "jo jo jo '\n' feliz navidad " << '\n'
         << endl;
    cout << caracter << '\n';
    //cout << palabra << '\n';

    cout << "ingrese nota ";
 cin >> condicionalsi;

    if (condicionalsi < 29)
    {
        if (condicionalsi = 29)
        {
            cout << "perdio perrito";
        }
    }
    else
    {

        cout << "paso perrito";
    }

    /*  TIPOS SIMPLES DE DATOS 

    QUE ES UN DATO

      Dato: es una expresion general que describe los objetos
       con los que opera una computadora 
    
     */

    /* TIPO DE DATO 

     Es un atributo de los datos que indica al ordenador sobre la 
    clase de datos que se va a procesar */

    /* DATOS NUMERICOS
    
    son aquellos qe representan una cantidad o valor determinado

    representación: int = enteros  float = reales 
    
    */

    /* CADENAS DE TEXTO

   son atributos que representan información textual
    (palabras, frases o simbolos)

    como por ejemplo de tipo char = caracter  
    permite asignar desde una letra, un simbolo 
    o un conjunto de caracteres 
    o por otro lado de tipo string = cadena 


    si vamos a imprimir una palabra de tipo char el compilador 
    va a imprimir solamente la ultima letra  porque solo recibe un caracter


    por otro lado el tipo de dato string sirve para escribir simbolos y caracteres

   
   */

    /*  TIPO DE DATO LOGICO 
  
  es aquel dato que solo puede tomar uno de dos valores:

  verdadero o falso = bool  0  o 1

  



   */

    /* QUE ES UNA VARIABLE 

    una variable es un espacio reservado en memoria que se 
    asigna con unico tipo de dato 

  /* CONSTANTES

  una constante es aquella variable cuyo valor es constante 
  
  es un espacio en reservado en memoria para almacenar un tipo 
  de dato soportado por un lenguaje de programación 

  un claro ejemplo de la reserva de la variable es imaginar 
  un rectangulo y dentro de el reservar pequeños cuadros dentro
  de el 

  teniendo en cuenta que el nombre de la variable no puede ser cambiado

  su estructura es asi: 

  const int numero = 23; 

  
  
  */

    /* ESTRUCTURA  DE UNA VARIABLE

 primero se declara la variable = se define el tipo numero - texto - logica
 
 luego se tiene que inicializar = darle un valor de inicio

 utilizacion de la variable = utilidad de la variable en el programa 

 */

    /*EL AMBITO DE UNA VARIABLE 
 
  es aquella zona donde se declaran las variables se pueden definir 
 dos tipo LOCALES Y GLOBALES las variables globales estan fueran del main
 mientras que las locales estan encerradas entre llaves 
 define
 
  */

    /* VARIABLES CONTADORAS Y ACUMULADORAS 

Variable contadora 

 es aquella que sirve para registrar las veces que se ejecuta 
 un proceso incremental o decrementalemente de forma constante
 por cada iteracion o repeticion

sintaxis

contador=contador+1;

contador=contador-1;

se inicializa de esta manera

contador=0;


variable acumuladora 


es aquella que permite almacenar un valor que 
almacena cantidades resultantes de las sumas sucesivas 
en cada iteracion

sintaxis 


acumulador=acumulador + variable (vambia)


mientras la variable contadora cuenta las 
veces que sucede un proceso este toma la variable 
y lo cambia 



  */

    /* DECLARACION VARIABLES 

    primero se selecciona el tipo de variable luego se le asigna un nombre 
 seguido de ello alli se asigna el valor 
 tipo de dato + nombre del dato + = asignacion de dato + ; 

 se pueden declarar varias variables en un solo tipo de dato se tiene que 
 separar de la siguiente manera: int numero = 23, num2=3, num3=4  

 */

    /* SECUENCIAS DE ESCAPE



cout <<  variable <<'\a' <<" "<< variable1 <<endl;
    

     cout <<  variable <<'\b' <<" "<< variable1 <<endl;

     sirve para retroceder el cursor 

     cout <<  variable <<'\f' <<" "<< variable1 <<endl;

     avanza en pagina 

     cout <<  variable <<'\n' <<" "<< variable1 <<endl;

     salto de linea 

     cout <<  variable <<'\t' <<" "<< variable1 <<endl;

     tabulador horizontal

     cout <<  variable <<'\v' <<" "<< variable1 <<endl;

     tabulador vertical

     cout <<  variable <<'\\' <<" "<< variable1 <<endl;

     barra diagonal inversa 

     cout <<  variable <<'\?' <<" "<< variable1 <<endl;

      signo de interrogacion

     cout <<  variable <<'\'' <<" "<< variable1 <<endl; 

     signo de comilla sensilla

     cout <<  variable <<'\"' <<" "<< variable1 <<endl;

     signo de comilla doble

     cout <<  variable <<'\000' <<" "<< variable1 <<endl;

     signo de  hexadecimal

      cout <<  variable <<'\0' <<" "<< variable1 <<endl;

      signo de scape nulo

*/

    /*ESTRUCTURAS LOGICAS DE CONTROL
    
     
     Es un conjunto de sentencias para establecer una posible ruta
     deacuerdo a un condición llevando a cabo un determinado 
     bloque de instrucciones 

     mientras se cumpla cierta condición se va a ejecutar una
     determinada acción

      instruccion if: (condición a evaluar){

         operaciones a realizar si es verdadera solo una 
         condicion

         instruccion if else

         if (condicion){

         operaciones por verdadero

         }
         else{


             operaciones por falso 
         }

     }
     

     la estructura switch es una sentencia que se utiliza para 
     seleccionar una entre varias alternativas 
     
      


    
     */

/*  EXPRESIONES LOGICAS
 
 ESTAN CONSTITUIDAS POR NUMEROS, CONSTANTES O VARIABLES
 OPERADORES LOGICOS  Y OPERADORES LOGICOS

 SE UTILIZAN EN LAS ESTRUCTURAS SELECTIVAS 
 DEPENDIENDO EL RESULTADO DE LA EVALUACIÓN SE TOMA 
 POR UN DETERMINADO CAMINO ALTERNATIVO 

 EN LAS ESTRUCTURAS REPETITIVAS 

 DEPENDIENDO DEL RESULTADO DE LA EVALUACIÓN SE CONTINUA POR EL CICLO 
 O SE CONTINUA POR EL MISMO 

 OPERADORES RELACIONALES 

 relacion de dos operandos que pueden ser de tipo
 numeros alfanumericos constantes o variables (int char bolean )
 el resultado que arroja es verdadero o falso 


 igual que = 
 diferente a <>
 menor que <
 mayor que> 
 mayor  o igual que >=
 menor o iguale que <=









 */



    cout << "ingrese primer numero";
    cin >> n1;
    cout << "ingrese segundo numero";
    cin >> n2;
    cout << "ingrese tercer  numero";
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

                if (n2 > n3)
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
                }
            }
            else
            {
                cout << "no existe";
            }
        }
    }

    cout << "el numero mayor es:" << mayor;
}
