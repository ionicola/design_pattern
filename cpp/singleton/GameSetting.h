#ifndef GAME_SETTING
#define GAME_SETTING
#include <iostream>
using namespace std;
class GameSetting
{
private:
    static GameSetting *instance;
    int brightness;
    int volume;
    int width;
    int height;
    int fps;
    GameSetting();

public:
    static GameSetting *getInstance();
    int getBrightness();
    void setBrightness(int brightness);
    int getVolume();
    void setVolume(int volume);
    int getWidth();
    void setWidth(int width);
    int getHeight();
    void setHeight(int height);
    int getFps();
    void setFps(int fps);
    void displaySetting();
};

#include "GameSetting.cpp"
#endif