#include <iostream>

/*-------------------------------------------------------
                    Structs[INF-134]
Una estructura es, de cierta forma, una grupación de datos, los cuales no necesariamente son del mismo tipo, pero tienen cierta relación.

---------------------------------------------------------*/

using namespace std;

struct person {
    string name;
    int age;
};


int main() {
    //Creamos una persona y le damos valor a sus variables
    person persona1;
    persona1.name = "Eren";
    persona1.age = 19;
    //Mostramos en pantalla
    cout << persona1.name << " " << persona1.age << endl;

    //Arreglo de personas
    person personArray[5];
    //Pedirle datos al usuario
    for(int i=0; i < 5; i++){
        cout << "Ingrese nombre: ";
        cin >> personArray[i].name;
        cout << "Ingrese edad; ";
        cin >> personArray[i].age;   
    }

    //Pedirle al usuario sus datos
    person user;
    cout << "Ingrese su nombre: ";
    cin >> user.name;
    cout << "Ingrese su edad; ";
    cin >> user.age;

    return 0;
} 