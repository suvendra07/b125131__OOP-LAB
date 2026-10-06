#include <iostream>
#include <string>
using namespace std;

class Vehicle {
protected:
    string regNumber;
    int rentalDays;

public:
    Vehicle(string reg, int days) {
        regNumber = reg;
        rentalDays = days;
    }
};

class Car : public Vehicle {
protected:
    float dailyRate;

public:
    Car(string reg, int days, float rate) : Vehicle(reg, days) {
        dailyRate = rate;
    }
};

class LuxuryCar : public Car {
private:
    float luxuryCharge;

public:
    LuxuryCar(string reg, int days, float rate, float lCharge) : Car(reg, days, rate) {
        luxuryCharge = lCharge;
    }

    void calculateAndDisplayCost() {
        float totalCost = (dailyRate + luxuryCharge) * rentalDays;
        cout << "--- Rental Invoice ---" << endl;
        cout << "Registration Number: " << regNumber << endl;
        cout << "Rental Days: " << rentalDays << endl;
        cout << "Daily Rate: " << dailyRate << endl;
        cout << "Luxury Charge / Day: " << luxuryCharge << endl;
        cout << "Total Rental Cost: " << totalCost << endl;
    }
};

int main() {
    string regNum;
    int days;
    float rate, luxuryCharge;

    cout << "Enter Vehicle Registration Number: ";
    cin >> regNum;
    cout << "Enter Number of Rental Days: ";
    cin >> days;
    cout << "Enter Daily Rental Rate: ";
    cin >> rate;
    cout << "Enter Luxury Charge per Day: ";
    cin >> luxuryCharge;

    LuxuryCar lc(regNum, days, rate, luxuryCharge);
    lc.calculateAndDisplayCost();

    return 0;
}
