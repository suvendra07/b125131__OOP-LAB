#include <iostream>
using namespace std;

void display(int val) {
    cout << "Integer: " << val << endl;
}
void display(double val) {
    cout << "Double: " << val << endl;
}
void display(char val) {
    cout << "Character: " << val << endl;
}
void display(const int arr[], int size) {
    cout << "Integer Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void display(const char arr[], int size) { // i used const here for not modify the array elements later.
    cout << "Character Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int intVal = 42;
    double dblVal = 3.14159;
    char charVal = 'Z';
    int intArr[] = {1, 2, 3, 4};
    char charArr[] = {'H', 'e', 'l', 'l', 'o'};

    display(intVal);
    display(dblVal);
    display(charVal);
    display(intArr, 4);
    display(charArr, 5);
    return 0;
}