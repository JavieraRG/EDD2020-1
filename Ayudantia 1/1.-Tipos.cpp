#include <iostream>

using namespace std;

/*-------------------------------------------------------
                    Tipos de Datos[INF-134]
Existen los siguientes tipos:

char
int
short
unsigned int
long
float
doubleqmc,xmc,xm,xcxcxcxcx
long double
bool
A continuación se verá como declarar variables, asignarle un valor y realizar operaciones.
Recuerden que para compilar deben usar g++ en su terminal, ejemplo

'g++ archivo.cpp' -o nombreDelOutput

Para ejecutar:

'./nombreDelOutput'

En este caso por ejemplo:
g++ 1.-Tipos.cpp -o out
./out
---------------------------------------------------------*/

int main(){

    //Output  
    cout << "Hola Mundo" << endl;

    //Declarar variable
    int numero;

    //Asignar variable
    numero = 10;
    cout << numero << endl;

    float flotante = 7.8;
    cout << flotante << endl;

    //Operar con variable
    numero++;
    cout << numero << endl;
    cout << numero*flotante << endl;

    //Ejemplo de perdida de información de flotante a int.
    numero = flotante;
    cout<<numero<< endl;

    return 0;
}