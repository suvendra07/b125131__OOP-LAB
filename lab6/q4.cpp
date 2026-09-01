#include <iostream>
using namespace std;

int main() {
    int seats[8];
    cout << "Enter 8 initial seat numbers: \n";
    for (int i = 0; i < 8; i++) {
        cin >> seats[i];
    }
    cout << " Seat numbers before update: \n";
    for (int i = 0; i < 8; i++) {
        cout << *(seats + i) << " ";
    }
    cout << endl;

    int pos, newSeatNo;
    cout << "Enter position to update (0 to 7): ";
    cin >> pos;
    cout << "Enter new seat number: ";
    cin >> newSeatNo;
    *(seats + pos) = newSeatNo;
    cout << "Seat numbers after update: \n";
    for (int i = 0; i < 8; i++) {
        cout << *(seats + i) << " ";
    }
    cout << endl;
    return 0;
}