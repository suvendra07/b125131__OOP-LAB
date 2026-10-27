#include <iostream>
using namespace std;

class CloudResource {
public:
    virtual void calculateCost(double cpuHours) {
        cout << "Base cloud resource calculation." << endl;
    }
};

class StandardInstance : public CloudResource {
public:
    void calculateCost(double cpuHours) override {
        double cost = cpuHours * 5.0;
        if (cpuHours > 100) {
            cost -= cost * 0.15;
        }
        cout << "Standard Instance Final Cost: Rs. " << cost << endl;
    }
};

class PremiumInstance : public CloudResource {
public:
    void calculateCost(double cpuHours) override {
        double cost = cpuHours * 12.0;
        if (cpuHours > 100) {
            cost -= cost * 0.15; 
        }
        cout << "Premium Instance Final Cost: Rs. " << cost << endl;
    }
};

int main() {
    double hours;
    cout << "Enter CPU hours: ";
    cin >> hours;
    
    StandardInstance stdInst;
    PremiumInstance premInst;
    
    stdInst.calculateCost(hours);
    premInst.calculateCost(hours);
    
    return 0;
}