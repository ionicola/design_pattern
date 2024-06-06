#ifndef RIGHT_OBSERVER
#define RIGHT_OBSERVER
#include "Observer.h"
class RightObserver : public Observer
{
public:
    RightObserver(Car *car);
    void update();
};
#endif