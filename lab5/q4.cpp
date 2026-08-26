#include <iostream>
using namespace std;

int searchElement(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key)
         return i;
    }
    return -1;
}
int searchElement(char arr[], int size, char key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key)
         return i;
    }
    return -1;
}
int searchElement(int arr[], int startIndx, int endIndx, int key) {
    for (int i = startIndx; i <= endIndx; i++) {
        if (arr[i] == key) return i;
    }
    return -1;
}

int main() {
    int intArr[] = {10, 20, 30, 40, 50};
    char charArr[] = {'a', 'b', 'c', 'd'};

    int pos1 = searchElement(intArr, 5, 30);
    if (pos1 != -1) cout << "Integer found at index: " << pos1 << endl;
    else cout << "Integer not found." << endl;

    int pos2 = searchElement(charArr, 4, 'c');
    if (pos2 != -1) cout << "Character found at index: " << pos2 << endl;
    else cout << "Character not found." << endl;

    int pos3 = searchElement(intArr, 1, 3, 40);
    if (pos3 != -1) cout << "Integer found in range at index: " << pos3 << endl;
    else cout << "Integer not found in specified range." << endl;
    return 0;
}