#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    Number() {
        value = 0;
    }

    Number(int v) {
        value = v;
    }

    void input() {
        cout << "Enter integer value: ";
        cin >> value;
    }

    Number operator-() {
        Number temp;
        temp.value = -value;
        return temp;
    }

    void display() {
        cout << value << endl;
    }
};

int main() {
    Number n1;
    n1.input();

    Number n2 = -n1;

    cout << "Original Object (n1): ";
    n1.display();

    cout << "New Negated Object (n2): ";
    n2.display();

    return 0;
}