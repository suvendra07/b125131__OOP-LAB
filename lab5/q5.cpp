#include <iostream>
using namespace std;

void modifyData(int &num, int val) {
    num += val;
}
void modifyData(double &num, double val) {
    num += val;
}
void modifyData(int *ptr, int val) {
    if (ptr != nullptr) {
        *ptr += val;
    }
}

int main() {
    int a = 10;
    double b = 5.5;
    int c = 100;

    cout << "Before modification:" << endl;
    cout << "a = " << a << ", b = " << b << ", c = " << c << endl;
    modifyData(a, 5);     
    modifyData(b, 2.3); 
    modifyData(&c, 50);   
    cout << "After modification:" << endl;
    cout << "a = " << a << ", b = " << b << ", c = " << c << endl;
    return 0;
}