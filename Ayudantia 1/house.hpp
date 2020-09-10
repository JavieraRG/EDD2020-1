#ifndef house_HPP
#define house_HPP

#include <iostream>
#include <cstdio>

struct house{
    std::string owner;
    int people;
    int car;
    bool pet;
    int debt;
};

int numberOfPeople(house casa);
int numberOfCar(house casa);
bool isThereAPet(house casa);
void doesItHaveDebt(house casa);

#endif