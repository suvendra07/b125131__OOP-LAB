#include <iostream>
using namespace std;

class Date {
private:
    int day;
    int month;
    int year;

public:
    void input() {
        cout << "Enter day, month, year (e.g. 15 08 2026): ";
        cin >> day >> month >> year;
    }

    bool operator==(Date d) {
        if (day == d.day && month == d.month && year == d.year) {
            return true;
        } else {
            return false;
        }
    }
};

int main() {
    Date d1, d2;

    cout << "Enter Date 1:" << endl;
    d1.input();

    cout << "Enter Date 2:" << endl;
    d2.input();

    if (d1 == d2) {
        cout << "Output: Both dates are equal." << endl;
    } else {
        cout << "Output: Dates are not equal." << endl;
    }

    return 0;
}