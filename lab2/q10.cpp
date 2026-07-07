#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class ElectricityBill {
private:
    int consumerNumber;
    string consumerName;
    double unitsConsumed;
    double totalBill;
public:
    void acceptDetails() {
        cout << "Enter Consumer Number: ";
        cin >> consumerNumber;
        cin.ignore(); 

        cout << "Enter Consumer Name: ";
        getline(cin, consumerName);
        cout << "Enter Units Consumed: ";
        cin >> unitsConsumed;
    }
    void calculateBill() {
        if (unitsConsumed <= 100) {
            totalBill = unitsConsumed * 5.0;
        } 
        else if (unitsConsumed <= 200) {
            totalBill = (100 * 5.0) + ((unitsConsumed - 100) * 7.0);
        } 
        else {
            totalBill = (100 * 5.0) + (100 * 7.0) + ((unitsConsumed - 200) * 10.0);
        }
    }
    void displayBill() const {
        cout << "\n===================================" << endl;
        cout << "       ELECTRICITY BILL RECEIPT    " << endl;
        cout << "===================================" << endl;
        cout << "Consumer Number : " << consumerNumber << endl;
        cout << "Consumer Name   : " << consumerName << endl;
        
        cout << fixed << setprecision(2);
        cout << "Units Consumed  : " << unitsConsumed << " units" << endl;
        cout << "-----------------------------------" << endl;
        cout << "Total Bill      : $" << totalBill << endl;
        cout << "===================================" << endl;
    }
};
int main() {
    ElectricityBill bill;
    cout << "--- Enter Electricity Bill Details ---" << endl;
    bill.acceptDetails();
    bill.calculateBill();
    bill.displayBill();

    return 0;
}