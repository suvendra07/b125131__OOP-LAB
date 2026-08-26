#include <iostream>
using namespace std;

double processData(int a, int b) {
    cout << "Processing (int * int): ";
    return a * b;
}
double processData(int a, double b) {
    cout << "Processing (int + double): ";
    return a + b;
}
double processData(double a, double b) {
    cout << "Processing (double / double): ";
    return (b != 0) ? (a / b) : 0;
}
double processData(const int arr[], int size) {
    cout << "Processing (Array Average): ";
    if (size <= 0) return 0.0;
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum / size;
}
double processData(int *ptr1, int *ptr2) {
    cout << "Processing (Pointer Swap & Sum): ";
    if (!ptr1 || !ptr2) return 0;
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
    return *ptr1 + *ptr2;
}

int main() {
    int i1 = 6, i2 = 4;
    double d1 = 12.5, d2 = 2.5;
    int arr[] = {10, 20, 30, 40};

    cout << processData(i1, i2) << endl;
    cout << processData(i1, d1) << endl;
    cout << processData(d1, d2) << endl;
    cout << processData(arr, 4) << endl;

    cout << "Before pointer process: i1 = " << i1 << ", i2 = " << i2 << endl;
    cout << "Sum: " << processData(&i1, &i2) << endl;
    cout << "After pointer process: i1 = " << i1 << ", i2 = " << i2 << endl;
    return 0;
}