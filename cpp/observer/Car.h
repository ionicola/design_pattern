#ifndef CAR
#define CAR
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
class Car
{
private:
    int position;
    vector<class Observer *> observerList;

public:
    int getPosition();
    void setPosition(int newPosition);
    void attach(Observer *observer);
    void detach(Observer *observer);
    void notify();
};
#endif