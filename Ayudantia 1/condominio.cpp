#include <iostream>
#include <cstdio>

#include "house.hpp"

using namespace std;

int main(){
    house casa1;

    casa1.owner = "luchito Lopez";
    casa1.car = 1;
    casa1.pet = true;
    casa1.people = 5;
    casa1.debt = 170000;

    cout << "Numero de Habitantes: " << numberOfPeople(casa1) << endl;
    cout << "Numero de Autos: " << numberOfCar(casa1) << endl;

    if(casa1.pet == true){
        cout << "Tiene mascota" << endl;
    }

    doesItHaveDebt(casa1);

    cout << endl;
    return 0;
}