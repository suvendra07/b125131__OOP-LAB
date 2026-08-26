#include <iostream>
using namespace std;

int findMax(int a, int b) {
    return (a > b) ? a : b;
}
int findMax(const int *ptr1, const int *ptr2) {
    if (!ptr1 || !ptr2) return 0; 
    return (*ptr1 > *ptr2) ? *ptr1 : *ptr2;
}
int findMax(const int *arr, int size) {
    if (size <= 0) return 0;
    int maxVal = arr[0];
    for (int i = 1; i < size; i++) {
        if (*(arr + i) > maxVal) { 
            maxVal = *(arr + i);
        }
    }
    return maxVal;
}

int main() {
    int x = 45, y = 82;
    int arr[] = {12, 99, 45, 67, 23};

    cout << "Max of two integers (45, 82): " << findMax(x, y) << endl;
    cout << "Max via pointers (&x, &y): " << findMax(&x, &y) << endl;
    cout << "Max of array elements using pointer arithmetic: " << findMax(arr, 5) << endl;

    return 0;
}