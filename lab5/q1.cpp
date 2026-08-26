#include <iostream>
using namespace std;

int calculate(int a, int b) {
    return a + b;
}
int calculate(int a, int b, int c) {
    return a + b + c;
}
double calculate(double a, double b) {
    return a + b;
}

int main() {
    cout << "Sum of 2 integers (10, 20): " << calculate(10, 20) << endl;
    cout << "Sum of 3 integers (10, 20, 30): " << calculate(10, 20, 30) << endl;
    cout << "Sum of 2 doubles (5.5, 4.4): " << calculate(5.5, 4.5) << endl;
    return 0;
}