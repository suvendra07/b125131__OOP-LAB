#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter total number of parking slots: ";
    cin >> n;

    int *slots = new int[n];
    cout << "Enter status for each slot (0 for Available, 1 for Occupied):\n";
    for (int i = 0; i < n; i++) {
        cin >> *(slots + i);
    }

    int available = 0, occupied = 0;
    int *ptr = slots;

    for (int i = 0; i < n; i++) {
        if (*ptr == 0) {
            available++;
        } else if (*ptr == 1) {
            occupied++;
        }
        ptr++;
    }
    cout << " Available Slots: " << available << endl;
    cout << "Occupied Slots: " << occupied << endl;

    delete[] slots;
    return 0;
}
