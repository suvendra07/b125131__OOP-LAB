#include <iostream>
#include <string>
using namespace std;

class SmartDevice {
private:
    string deviceName;
    string deviceType;
    bool powerStatus;
public:
    SmartDevice(string name, string type, bool status)  : deviceName(name), deviceType(type), powerStatus(status) {}

    friend class HomeController;
};
class HomeController {
public:
    void displayInfo(const SmartDevice& dev) {
        cout << "Device: " << dev.deviceName << " | Type: " << dev.deviceType << endl;
    }
    void turnOn(SmartDevice& dev) {
        dev.powerStatus = true;
        cout << dev.deviceName << " powered ON." << endl;
    }
    void turnOff(SmartDevice& dev) {
        dev.powerStatus = false;
        cout << dev.deviceName << " powered OFF." << endl;
    }
    void displayPowerStatus(const SmartDevice& dev) {
        cout << dev.deviceName << " Status: "   << (dev.powerStatus ? "ON" : "OFF") << endl;
    }
};

int main() {
    SmartDevice tv("Living Room TV", "Entertainment", false);
    HomeController controller;

    controller.displayInfo(tv);
    controller.displayPowerStatus(tv);
    controller.turnOn(tv);
    controller.displayPowerStatus(tv);

    return 0;
}