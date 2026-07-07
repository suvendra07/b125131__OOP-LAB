#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    string accountHolderName;
    double balance;

public:
    BankAccount() {
        accountNumber = 0;
        accountHolderName = "";
        balance = 0.0;
    }
    void enterDetails() {
        cout << "Enter Account Number: ";
        cin >> accountNumber;

        cin.ignore();
        cout << "Enter Account Holder Name: ";
        getline(cin, accountHolderName);
        cout << "Enter Initial Balance: $";
        cin >> balance;
    }
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "\nSuccess: $" << amount << " deposited successfully!" << endl;
        } else {
            cout << "\nError: Deposit amount must be greater than zero!" << endl;
        }
    }
    void withdraw(double amount) {
        if (amount > balance) {
            cout << "\nTransaction Failed: Insufficient balance!" << endl;
            cout << "Requested: $" << amount << " | Available: $" << balance << endl;
        } else if (amount <= 0) {
            cout << "\nError: Withdrawal amount must be greater than zero!" << endl;
        } else {
            balance -= amount;
            cout << "\nSuccess: $" << amount << " withdrawn successfully!" << endl;
        }
    }
    void displayDetails() {
        cout << "\n----------------------------" << endl;
        cout << "     ACCOUNT DETAILS        " << endl;
        cout << "----------------------------" << endl;
        cout << "Account Number : " << accountNumber << endl;
        cout << "Account Holder : " << accountHolderName << endl;
        cout << "Current Balance: $" << balance << endl;
        cout << "----------------------------" << endl;
    }
};
int main() {
    BankAccount myAccount;
    cout << "=== BANK ACCOUNT MANAGEMENT SYSTEM ===" << endl;
    myAccount.enterDetails();
    myAccount.displayDetails();

    double depositAmt;
    cout << "\nEnter amount to deposit: $";
    cin >> depositAmt;
    myAccount.deposit(depositAmt);
    myAccount.displayDetails();

    double withdrawAmt;
    cout << "\nEnter amount to withdraw: $";
    cin >> withdrawAmt;
    myAccount.withdraw(withdrawAmt);
    myAccount.displayDetails();

    return 0;
}