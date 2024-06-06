#include "Car.h"

int Car::getPosition()
{
    return position;
}

void Car::setPosition(int newPosition)
{
    position = newPosition;
    notify();
}

void Car::attach(Observer *observer)
{
    observerList.push_back(observer);
}

void Car::detach(Observer *observer)
{
    observerList.erase(remove(observerList.begin(), observerList.end(), observer), observerList.end());
}