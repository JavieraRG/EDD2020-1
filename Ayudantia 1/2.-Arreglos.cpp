#include <iostream>
using namespace std;

/*-------------------------------------------------------
                    Arreglos[INF-134]
Un arreglo es una colecci ́on ordenada de variables del mismo tipo. Las variables que pertenecen a un arreglo se conocen por el nombre de elementos.
Su comportamiento es similar a las listas de Pyhton.

Imaginemos que declaramos un arreglo de largo 5 tipo int, visualmente sería como:
+--+--+--+--+--+
|  |  |  |  |  |
+--+--+--+--+--+
 
Si le asignamos a la primera posición el valor 3, este se vería:
+---+--+--+--+--+
| 3 |  |  |  |  |
+---+--+--+--+--+

Ahora a la segunda posición 7:

+---+---+--+--+--+
| 3 | 7 |  |  |  |
+---+---+--+--+--+

Y así sucesivamente.
---------------------------------------------------------*/

int main(){
    //Arreglo de 5 celdas
    int arreglo[5];

    //Indexar
    arreglo[0] = 1;

    //Indexar y también llamar al valor de un arreglo
    arreglo[1] = arreglo[0] + 1;

    //Pedimos valores al usuario
    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    cout << arr << endl;

    //Declarar y asignar arreglo
    int arrDos[] = {2,3,4,6,7};

    return 0;
}