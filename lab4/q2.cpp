#include <iostream>
#include <string>
using namespace std;

class Mobile {
private:
    string brand;
    string model;
    int batteryPercentage;

public:
    Mobile(string b, string m, int batt)   : brand(b), model(m), batteryPercentage(batt) {}

    friend void checkBattery(const Mobile& m);
};
void checkBattery(const Mobile& m) {
    cout << "Brand: " << m.brand << "\nModel: " << m.model 
         << "\nBattery: " << m.batteryPercentage << "%" << endl;
    
    if (m.batteryPercentage < 20)
        cout << "Status: Battery Low" << endl;
    else
        cout << "Status: Battery Normal" << endl;
}

int main() {
    Mobile phone("Samsung", "S23", 15);
    checkBattery(phone);
    return 0;
}