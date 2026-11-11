#include "Device.h"
#include<iostream>

using namespace std;

void Device::showInfo() const
    {
        cout<<"设备编号:"<<id<<endl;
        cout<<"设备名称:"<<name<<endl;
        cout<<"所在房间:"<<room<<endl;
        if(isOn)
        {
            cout<<"设备开关状态：开启"<<endl;
        }
        else
        {
            cout<<"设备开关状态：关闭"<<endl;
        }
    }
    bool Device::turnOn()
    {
        if(isOn)
        {
            return false;
        }
        isOn=true;
        return true;
    }
    bool Device::turnOff()
    {
        if(!isOn)
        {
            return false;
        }
        isOn=false;
        return true;
    }
