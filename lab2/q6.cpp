#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    int inches;

public:
    Distance() {
        feet = 0;
        inches = 0;
    }
    void inputDistance() {
        cout << "Enter feet: ";
        cin >> feet;
        cout << "Enter inches: ";
        cin >> inches;
    }
    void addDistance(Distance d1, Distance d2) {
        feet = d1.feet + d2.feet;
        inches = d1.inches + d2.inches;

        if (inches >= 12) {
            feet += (inches / 12);
            inches = (inches % 12);
        }
    }

    void displayDistance() {
        cout << feet << " feet " << inches << " inches" << endl;
    }
};

int main() {
    Distance d1, d2, sum;
    cout << "=== Enter First Distance ===" << endl;
    d1.inputDistance();

    cout << "\n=== Enter Second Distance ===" << endl;
    d2.inputDistance();

    sum.addDistance(d1, d2);
  
    cout << "\n----------------------------" << endl;
    cout << "      DISTANCE SUMMARY      " << endl;
    cout << "----------------------------" << endl;
    cout << "First Distance  : ";
    d1.displayDistance();
    cout << "Second Distance : ";
    d2.displayDistance();
    cout << "Total Distance  : ";
    sum.displayDistance();
    cout << "----------------------------" << endl;

    return 0;
}