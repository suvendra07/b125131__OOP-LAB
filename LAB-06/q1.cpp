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

    Distance(int f, int i) {
        feet = f;
        inches = i;
    }

    void input() {
        cout << "Enter feet: ";
        cin >> feet;
        cout << "Enter inches: ";
        cin >> inches;
    }

    Distance operator+(Distance d) {
        Distance result;
        result.feet = feet + d.feet;
        result.inches = inches + d.inches;

        if (result.inches >= 12) {
            result.feet = result.feet + (result.inches / 12);
            result.inches = result.inches % 12;
        }

        return result;
    }

    void display() {
        cout << feet << " feet " << inches << " inches" << endl;
    }
};

int main() {
    Distance d1, d2, d3;

    cout << "Enter first distance:" << endl;
    d1.input();

    cout << "Enter second distance:" << endl;
    d2.input();

    d3 = d1 + d2;

    cout << "Resulting Distance: ";
    d3.display();

    return 0;
}