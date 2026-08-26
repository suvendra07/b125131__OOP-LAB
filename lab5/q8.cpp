#include <iostream>
#include <cmath>
using namespace std;

int countData(int n) {
    if (n == 0) return 1;
    int count = 0;
    n = abs(n); // Handle negative numbers
    while (n > 0) {
        count++;
        n /= 10;
    }
    return count;
}
int countData(const int arr[], int size) {
    return size;
}
int countData(const char arr[], int size, char target) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) count++;
    }
    return count;
}

int main() {
    int num = -12345;
    int arr[] = {10, 20, 30, 40, 50, 60};
    char text[] = {'b', 'a', 'n', 'a', 'n', 'a'};

    cout << "Digits in " << num << ": " << countData(num) << endl;
    cout << "Elements in integer array: " << countData(arr, 6) << endl;
    cout << "Occurrences of 'a' in array: " << countData(text, 6, 'a') << endl;
    return 0;
}