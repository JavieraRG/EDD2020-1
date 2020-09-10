#include <iostream>
#include <cstdio> //Biblioteca usada para utilizar printf
using namespace std;

/*-------------------------------------------------------
                    Control de Flujo[INF-134]
Ejemplo de Control de flujo utilizando ciclo for, while y do-while

---------------------------------------------------------*/
int main() {

    int arr[] = {1, 2, 4, 8, 6, 7, 9, 21};
    int n = 8;
    /*Buscamos que sean pares*/
    cout << "Numeros Pares:";
    int cont = 0;
    while (cont < n) {
        if (arr[cont] % 2 == 0) {
            printf(" %d", arr[cont]);
        }
        cont++;
    }
    cout << endl;

    /*Lo mismo utilizando ciclo for*/
    cout << "Numeros pares:";
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            printf(" %d", arr[i]);
        }
    }
    cout << endl;

    /*Sumar solo números positivos utilizando ciclo while */

    int numero;
    int suma = 0;

    //Input del usuario
    cout << "Ingrese Numero";
    cin >> numero;

    while (numero >= 0) {
        suma += numero;

        cout << "Ingrese un numero: ";
        cin >> numero;
    }
    cout << "\nLa suma es" << suma << endl;
    cout << endl;


    /*Mismo objetivo pero utilizando do-while */
    numero = 0;
    suma = 0;

    do {
        suma += numero;

        //Input del usuario
        cout << "Ingrese un numero: ";
        cin >> numero;
    }while (numero >= 0);
    
    //Mostramos la suma en pantalla
    cout << "\nLa suma es" << suma << endl;
    

    cout << endl;
    return 0;
}