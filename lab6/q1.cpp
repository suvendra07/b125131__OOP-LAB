#include <iostream>
using namespace std;

int main() {
    int parcels;
    cout << "Enter initial number of parcels: ";
    cin >> parcels;

    int *ptr = &parcels;
    cout << "Initial parcels using pointer : " << *ptr << endl;

    int increment;
    cout << "Enter number of new parcels to add: ";
    cin >> increment;

    *ptr += increment;
    cout << "Updated parcels using pointer: "<< *ptr << endl;
    return 0;
}