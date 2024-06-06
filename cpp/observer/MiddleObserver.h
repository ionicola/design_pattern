#ifndef MIDDLE_OBSERVER
#define MIDDLE_OBSERVER
#include "Observer.h"
class MiddleObserver : public Observer
{
public:
    MiddleObserver(Car *car);
    void update();
};
#endif