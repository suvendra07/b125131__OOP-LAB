#include <iostream>
using namespace std;

int calculateTotal(int arr[], int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += arr[i];
    }
    return total;
}
double calculateTotal(double arr[], int size) {
    double total = 0.0;
    for (int i = 0; i < size; i++) {
        total += arr[i];
    }
    return total;
}
int calculateTotal(int arr[], int size, int count) {
    int total = 0;
    int limit = (count < size) ? count : size;
    for (int i = 0; i < limit; i++) {
        total += arr[i];
    }
    return total;
}

int main() {
    int intArr[] = {1, 2, 3, 4, 5};
    double doubleArr[] = {1.5, 2.5, 3.5};

    cout << "Total of integer array: " << calculateTotal(intArr, 5) << endl;
    cout << "Total of double array: " << calculateTotal(doubleArr, 3) << endl;
    cout << "Total of first 3 elements of integer array: " << calculateTotal(intArr, 5, 3) << endl;

    return 0;
}