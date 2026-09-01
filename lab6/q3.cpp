#include <iostream>
using namespace std;

int main() {
    int bookIDs[6];
    cout << "Enter 6 book IDs: ";
    for (int i = 0; i < 6; i++) {
        cin >> bookIDs[i];
    }
    int *ptr = bookIDs;
    cout <<"Book IDs and their memory addresses: \n";
    for (int i = 0; i < 6; i++) {
        cout <<"ID: "<< *ptr <<" Address: "<< ptr << endl;
        ptr++;
    }
    return 0;
}