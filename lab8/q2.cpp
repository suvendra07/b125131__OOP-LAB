#include <iostream>
using namespace std;

class ParkingSlot {
public:
    virtual void calculateFee(int hours) {
        cout << "Base parking fee calculation." << endl;
    }
};

class TwoWheelerSlot : public ParkingSlot {
public:
    void calculateFee(int hours) override {
        double totalFee = hours * 10.0;
        if (hours > 5) {
            totalFee -= totalFee * 0.10; 
        }
        cout << "Two-Wheeler Final Parking Fee: Rs. " << totalFee << endl;
    }
};

class FourWheelerSlot : public ParkingSlot {
public:
    void calculateFee(int hours) override {
        double totalFee = hours * 30.0;
        if (hours > 5) {
            totalFee -= totalFee * 0.10; 
        }
        cout << "Four-Wheeler Final Parking Fee: Rs. " << totalFee << endl;
    }
};

int main() {
    int hours;
    cout << "Enter parking duration in hours: ";
    cin >> hours;
    
    TwoWheelerSlot twoWheeler;
    FourWheelerSlot fourWheeler;
    
    twoWheeler.calculateFee(hours);
    fourWheeler.calculateFee(hours);
    
    return 0;
}