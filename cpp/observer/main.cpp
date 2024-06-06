#include "Car.h"
#include "RightObserver.h"
#include "LeftObserver.h"
#include "MiddleObserver.h"

int main(int argc, char *argv[])
{
    Car *car = new Car();
    RightObserver rightObserver(car);
    LeftObserver leftObserver(car);
    MiddleObserver middleObserver(car);

    cout << "Hit left button to drive a car in your city! and press Esc to close" << endl;
    char pressedButton;
    bool breakLoop = false;
    while (!breakLoop)
    {
        cin >> pressedButton;
        switch (pressedButton)
        {
        case 97:
        {
            car->setPosition(-1);
            break;
        }
        case 115:
        {
            car->setPosition(0);
            break;
        }
        case 100:
        {
            car->setPosition(1);
            break;
        }
        case 98:
        {
            breakLoop = true;
            break;
        }
        default:
        {
            cout << "drive carefully!" << endl;
            break;
        }
        }
    }
    return 0;
}