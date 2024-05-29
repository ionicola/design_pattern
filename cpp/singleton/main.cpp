#include "GameSetting.h"
int main(int argc, char *argv[])
{
    GameSetting *gameSetting = GameSetting::getInstance();
    gameSetting->displaySetting();
    gameSetting->setBrightness(100);
    gameSetting->setVolume(90);
    gameSetting->setWidth(900);
    gameSetting->setHeight(600);
    gameSetting->setFps(40);
    gameSetting->displaySetting();
    GameSetting *otherSetting = GameSetting::getInstance();
    otherSetting->displaySetting();
    system("pause");
    return 0;
}