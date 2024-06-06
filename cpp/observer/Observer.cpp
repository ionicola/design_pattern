#include "Observer.h"

Observer::Observer(Car *car)
{
    this->car = car;
    this->car->attach(this);
}

Car *Observer::getCar()
{
    return this->car;
}
void Car::notify()
{
    for (int i = 0; i < observerList.size(); i++)
    {
        observerList[i]->update();
    }
}