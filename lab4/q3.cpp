#include <iostream>
#include <string>
using namespace std;

class ParkingSlot {
private:
    int slotNumber;
    string vehicleNumber;
    bool isOccupied;
public:
    ParkingSlot(int slot, string vehicle, bool status)  : slotNumber(slot), vehicleNumber(vehicle), isOccupied(status) {}

    friend void checkSlot(const ParkingSlot& p);
};
void checkSlot(const ParkingSlot& p) {
    cout << "Slot Number: " << p.slotNumber << endl;
    if (p.isOccupied) {
        cout << "Status: Occupied" << endl;
        cout << "Vehicle Number: " << p.vehicleNumber << endl;
    } else {
        cout << "Status: Available" << endl;
    }
}

int main() {
    ParkingSlot p1(1001, "OD-02-BB-5594", true);
    checkSlot(p1);
    return 0;
}