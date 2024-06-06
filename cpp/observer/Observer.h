#ifndef OBSERVER
#define OBSERVER
#include "Car.h"
class Observer
{
private:
    Car *car;

public:
    Observer(Car *car);
    virtual void update() = 0;

protected:
    Car *getCar();
};
#endif