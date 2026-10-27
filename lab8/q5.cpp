#include <iostream>
using namespace std;

class IrrigationSystem {
public:
    virtual void calculateWater(double moisture) {
        cout << "Base irrigation calculation." << endl;
    }
};

class DripIrrigation : public IrrigationSystem {
public:
    void calculateWater(double moisture) override {
        double water = 2 * (100 - moisture);
        cout << "Drip Irrigation Required Water: " << water << " litres." << endl;
    }
};

class SprinklerIrrigation : public IrrigationSystem {
public:
    void calculateWater(double moisture) override {
        double water = 3 * (100 - moisture);
        cout << "Sprinkler Irrigation Required Water: " << water << " litres." << endl;
    }
};

int main() {
    double moisture;
    cout << "Enter soil moisture percentage (0-100): ";
    cin >> moisture;
    
    DripIrrigation drip;
    SprinklerIrrigation sprinkler;
    
    drip.calculateWater(moisture);
    sprinkler.calculateWater(moisture);
    
    return 0;
}