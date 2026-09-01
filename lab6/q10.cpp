#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    int *studentIDs = new int[n];

    cout << "Enter " << n << " student IDs:\n";
    for (int i = 0; i < n; i++) {
        cin >> *(studentIDs + i);
    }
    int searchID;
    cout << "Enter Student ID to search: ";
    cin >> searchID;

    int *ptr = studentIDs;
    bool found = false;
    int position = -1;

    for (int i = 0; i < n; i++) {
        if (*ptr == searchID) {
            found = true;
            position = i; 
            break;
        }
        ptr++;
    }
    if (found) {
        cout << "ID " << searchID << " found at index position " << position << endl;
    } else {
        cout << "ID " << searchID << " not found." << endl;
    }
    
    delete[] studentIDs;
    return 0;
}