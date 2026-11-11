#ifndef DEVICE_H
#define DEVICE_H

#include<string>

class Device
{
public:
    std::string id;
    std::string name;
    std::string room;
    bool isOn;

    void showInfo() const;

    bool turnOn();

    bool turnOff();

};

#endif // DEVICE_H
