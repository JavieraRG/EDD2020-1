#include "house.hpp"

int numberOfPeople(house casa){
    return casa.people;
}

int numberOfCar(house casa){
    return casa.car;
}

bool isThereAPet(house casa){
    return casa.pet;
}
void doesItHaveDebt(house casa){
    if(casa.debt != 0){
        std::cout << casa.owner << " tiene una deuda de: " << casa.debt;
    }
}