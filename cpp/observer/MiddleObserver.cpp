#include "MiddleObserver.h"

MiddleObserver::MiddleObserver(Car *car) : Observer(car) {}

void MiddleObserver::update()
{
    int pos = getCar()->getPosition();
    if (pos == 0)
    {
        cout << "run straight" << endl;
    }
}