#include <iostream>

/*-------------------------------------------------------
                    Condicionales[INF-134]
Condicionales, a continuación veremos como utilizar dos tipos de condicionales para realizar la misma tarea
Revisar PPT para mas detalles de ellas

---------------------------------------------------------*/
using namespace std;
int main(){
    //Entrada del numeto
    cout << "Inserte una opción:\n";
    int num;
    cin >> num; //Input

    //Verificar numero (la opción) utilizando If-Else
    if (num == 0) {
        cout << num << "\nSu elección ha sido la opción 0";
    }
    else if(num == 1){
        cout << num << "\nSu elección ha sido la opción 1";
    }
    else{
        cout << num << " Su elección no es parte de las opciones";
    }
    
    cout << "Inserte una opción";
    cin >> num; //Input

    //Verificar numero (la opción) utilizando Switch
    switch(num){//valor es la variable a comparar
        case 0:
        cout << num << " Su elección ha sido la opción 0";
        break; //Es necesario para no ejecutar todos los casos.
        case 1:
        cout << num << " Su elección ha sido la opción 0";
        break;
        default:
        cout << num << " Su elección no es parte de las opciones";  
    }
    
    return 0;
}