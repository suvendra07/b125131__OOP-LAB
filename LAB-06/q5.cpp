#include <iostream>
using namespace std;

class Time {
private:
    int hours;
    int minutes;

public:
    Time() {
        hours = 0;
        minutes = 0;
    }

    Time(int h, int m) {
        hours = h;
        minutes = m;
    }

    void input() {
        cout << "Enter hours: ";
        cin >> hours;
        cout << "Enter minutes: ";
        cin >> minutes;
    }

    Time operator+(Time t) {
        Time temp;
        temp.hours = hours + t.hours;
        temp.minutes = minutes + t.minutes;

        if (temp.minutes >= 60) {
            temp.hours = temp.hours + (temp.minutes / 60);
            temp.minutes = temp.minutes % 60;
        }

        return temp;
    }

    void display() {
        cout << hours << " hours " << minutes << " minutes" << endl;
    }
};

int main() {
    Time t1, t2, t3;

    cout << "Enter Time 1:" << endl;
    t1.input();

    cout << "Enter Time 2:" << endl;
    t2.input();

    t3 = t1 + t2;

    cout << "\nResulting Time: ";
    t3.display();

    return 0;
}