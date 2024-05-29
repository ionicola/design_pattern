#include "GameSetting.h"
GameSetting *GameSetting::instance = nullptr;
GameSetting::GameSetting()
{
    // ctor
}
GameSetting *GameSetting::getInstance()
{
    if (instance == nullptr)
    {
        instance = new GameSetting();
    }
    return instance;
}

int GameSetting::getBrightness()
{
    return brightness;
}

void GameSetting::setBrightness(int brightness)
{
    this->brightness = brightness;
}

int GameSetting::getVolume()
{
    return volume;
}

void GameSetting::setVolume(int volume)
{
    this->volume = volume;
}

int GameSetting::getWidth()
{
    return width;
}

void GameSetting::setWidth(int width)
{
    this->width = width;
}

int GameSetting::getHeight()
{
    return height;
}

void GameSetting::setHeight(int height)
{
    this->height = height;
}

int GameSetting::getFps()
{
    return fps;
}

void GameSetting::setFps(int fps)
{
    this->fps = fps;
}

void GameSetting::displaySetting()
{
    cout << "Brightness: " << this->brightness << endl;
    cout << "Volume: " << this->volume << endl;
    cout << "Width: " << this->width << endl;
    cout << "Height: " << this->height << endl;
    cout << "Fps: " << this->fps << endl;
    cout << endl;
}