#include <iostream>
using namespace std;

int main() {
    double balance;
    cout << "Enter initial balance: ";
    cin >> balance;

    double *ptr = &balance;
    cout << "Current Balance: " << *ptr << endl;

    double addAmount;
    cout << "Enter amount to add: ";
    cin >> addAmount;
    *ptr += addAmount;

    double deductAmount;
    cout << "Enter amount to deduct: ";
    cin >> deductAmount;
    *ptr -= deductAmount;

    cout << "Final Balance: " << *ptr << endl;
    return 0;
}