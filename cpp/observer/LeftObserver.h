#ifndef LEFT_OBSERVER
#define LEFT_OBSERVER
#include "Observer.h"
class LeftObserver : public Observer
{
public:
    LeftObserver(Car *car);
    void update();
};
#endif