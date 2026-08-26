#include <iostream>
using namespace std;

void compareData(int a, int b) {
    if (a > b) cout << "Larger integer: " << a << endl;
    else if (b > a) cout << "Larger integer: " << b << endl;
    else cout << "Both integers are equal (" << a << ")" << endl;
}
void compareData(double a, double b) {
    if (a > b) cout << "Larger float: " << a << endl;
    else if (b > a) cout << "Larger float: " << b << endl;
    else cout << "Both float numbers are equal (" << a << ")" << endl;
}
void compareData(const int arr1[], const int arr2[], int size) {
    bool identical = true;
    for (int i = 0; i < size; i++) {
        if (arr1[i] != arr2[i]) {
            identical = false;
            break;
        }
    }
    if (identical) {
        cout << "Arrays are identical." << endl;
    } else {
        cout << "Arrays are NOT identical." << endl;
    }
}

int main() {
    compareData(10, 20);
    compareData(5.75, 2.34);

    int arrA[] = {1, 2, 3, 4};
    int arrB[] = {1, 2, 5, 4};
    int arrC[] = {1, 2, 3, 4};
    cout << "Comparing arrA and arrB: ";
    compareData(arrA, arrB, 4);
    cout << "Comparing arrA and arrC: ";
    compareData(arrA, arrC, 4);
    return 0;
}