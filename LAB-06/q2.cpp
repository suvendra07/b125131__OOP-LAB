#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imag;

public:
    Complex() {
        real = 0.0;
        imag = 0.0;
    }

    Complex(float r, float i) {
        real = r;
        imag = i;
    }

    void input() {
        cout << "Enter real part: ";
        cin >> real;
        cout << "Enter imaginary part: ";
        cin >> imag;
    }

    Complex operator-(Complex c) {
        Complex temp;
        temp.real = real - c.real;
        temp.imag = imag - c.imag;
        return temp;
    }

    void display() {
        if (imag >= 0) {
            cout << real << " + " << imag << "i" << endl;
        } else {
            cout << real << " - " << -imag << "i" << endl;
        }
    }
};

int main() {
    Complex c1, c2, c3;

    cout << "Enter first complex number (C1):" << endl;
    c1.input();

    cout << "Enter second complex number (C2):" << endl;
    c2.input();

    c3 = c1 - c2;

    cout << "Result (C1 - C2) = ";
    c3.display();

    return 0;
}