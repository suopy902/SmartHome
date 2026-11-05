#include <iostream>
#include<string>
#include<vector>
#include<limits>

using namespace std;

class Device
{
public:
    string id;
    string name;
    string room;
    bool isOn;

    void showInfo() const
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
    bool turnOn()
    {
        if(isOn)
        {
            return false;
        }
        isOn=true;
        return true;
    }
    bool turnOff()
    {
        if(!isOn)
        {
            return false;
        }
        isOn=false;
        return true;
    }
};

int findDevice(const vector<Device>& devices,const string& targetId)
{
    int devicecount=devices.size();
    for(int i=0;i<devicecount;i++)
    {
        if(devices[i].id == targetId)
        {
            return i;
        }
    }
    return -1;
}

void queryDevice(const vector<Device>& devices)
{
    string targetId;
    cout<<"请输入需要查找的设备编号:"<<endl;
    cin>>targetId;

    int index=findDevice(devices,targetId);

    if(index==-1)
    {
        cout<<"没有找到该设备。"<<endl;
    }
    else
    {
        cout<<"找到设备："<<endl;
        devices[index].showInfo();
    }
}

void turnOnDevice(vector<Device>& devices)
{
   string targetId;
   cout<<"请输入需要开启的设备编号:"<<endl;
   cin>>targetId;

   int index=findDevice(devices,targetId);

   if(index==-1)
   {
       cout<<"没有找到该设备，开启失败"<<endl;
   }
   else
   {
       if(devices[index].turnOn())
       {
           cout<<"设备开启成功"<<endl;
       }
       else
       {
           cout<<"设备已经处于开启状态，无需开启。"<<endl;
       }
       devices[index].showInfo();
   }
}

void turnOffDevice(vector<Device>& devices)
{
    string targetId;
    cout<<"请输入需要关闭的设备编号"<<endl;
    cin>>targetId;

    int index=findDevice(devices,targetId);
    if(index==-1)
    {
        cout<<"没有找到改设备，关闭失败"<<endl;
    }
    else
    {
        if(devices[index].turnOff())
        {
            cout<<"设备关闭成功"<<endl;
        }
        else
        {
            cout<<"设备已经处于关闭状态，无需关闭。"<<endl;
        }
        devices[index].showInfo();
    }
}

void showAllDevices(const vector<Device>& devices)
{
    if(devices.empty())
    {
        cout<<"当前没有设备。"<<endl;
        return;
    }
    cout<<"当前全部设备："<<endl;
    for(const Device& device : devices)
    {
        device.showInfo();
        cout<<"-------------------"<<endl;
    }
}

void createDevice(vector<Device>& devices)
{
    Device newDevice;
    cout<<"请输入新设备编号：";
    getline(cin,newDevice.id);
    if(newDevice.id.empty())
    {
        cout<<"创建失败：设备编号不能为空。"<<endl;
        return;
    }
    if(findDevice(devices,newDevice.id)!=-1)
    {
        cout<<"创建失败：设备编号已经存在。"<<endl;
        return;
    }
    cout<<"请输入新设备名称：";
    getline(cin,newDevice.name);

    if(newDevice.name.empty())
    {
        cout<<"创建失败：设备名称不能为空。"<<endl;
        return;
    }
    cout<<"请输入新设备所在房间：";
    getline(cin,newDevice.room);

    newDevice.isOn=false;
    devices.push_back(newDevice);

    cout<<"设备创建成功:"<<endl;
    newDevice.showInfo();
}

void showMenu()
{
    cout<<endl;
    cout<<"=====智能家居设备管理系统===="<<endl;
    cout<<"1.创建设备"<<endl;
    cout<<"2.显示所有设备"<<endl;
    cout<<"3.查询设备"<<endl;
    cout<<"4.打开设备"<<endl;
    cout<<"5.关闭设备"<<endl;
    cout<<"0.退出系统"<<endl;
    cout<<"请选择：";
}

int main()
{
    vector<Device> devices;

    Device device1;
    device1.id="D01";
    device1.name="灯";
    device1.room="客厅";
    device1.isOn=false;

    Device device2;
    device2.id="D02";
    device2.name="空调";
    device2.room="客厅";
    device2.isOn=false;

    Device device3;
    device3.id="D03";
    device3.name="窗帘";
    device3.room="卧室";
    device3.isOn=false;

    devices.push_back(device1);
    devices.push_back(device2);
    devices.push_back(device3);

    int choice;

    do
    {
        showMenu();

        if(!(cin>>choice))
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');

            cout<<"输入无效，请输入数字菜单项。"<<endl;
            continue;
        }
        cin.ignore(numeric_limits<streamsize>::max(),'\n');

        switch(choice)
        {
        case 1:
            createDevice(devices);
            break;
        case 2:
            showAllDevices(devices);
            break;
        case 3:
            queryDevice(devices);
            break;
        case 4:
            turnOnDevice(devices);
            break;
        case 5:
            turnOffDevice(devices);
            break;
        case 0:
            cout<<"系统已退出。"<<endl;
            break;

        default:
            cout<<"无效菜单项，请重新输入。"<<endl;
        }
    }while(choice!=0);

    return 0;
}

