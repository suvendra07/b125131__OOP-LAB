#include <iostream>
using namespace std;

class Temperature {
private:
    float celsius;

public:
    Temperature() {
        celsius = 0.0;
    }

    Temperature(float c) {
        celsius = c;
    }

    void input() {
        cout << "Enter temperature in Celsius: ";
        cin >> celsius;
    }

    bool operator<(Temperature t) {
        if (celsius < t.celsius) {
            return true;
        } else {
            return false;
        }
    }

    bool operator>(Temperature t) {
        if (celsius > t.celsius) {
            return true;
        } else {
            return false;
        }
    }

    float getCelsius() {
        return celsius;
    }
};

int main() {
    Temperature t1, t2;

    cout << "Enter First Temperature:" << endl;
    t1.input();

    cout << "Enter Second Temperature:" << endl;
    t2.input();

    if (t1 < t2) {
        cout << "First temperature (" << t1.getCelsius() 
             << " C) is lower than second temperature (" << t2.getCelsius() << " C)." << endl;
    } else if (t1 > t2) {
        cout << "First temperature (" << t1.getCelsius() 
             << " C) is higher than second temperature (" << t2.getCelsius() << " C)." << endl;
    } else {
        cout << "Both temperatures are equal (" << t1.getCelsius() << " C)." << endl;
    }

    return 0;
}