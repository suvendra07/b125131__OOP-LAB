#include <iostream>
using namespace std;

class BankAccount {
protected:
    int accountNumber;
    double balance;

public:
    BankAccount(int accNo, double bal) {
        accountNumber = accNo;
        balance = bal;
    }
};

class SavingsAccount : public BankAccount {
public:
    SavingsAccount(int accNo, double bal) : BankAccount(accNo, bal) {}

    void addInterest(double ratePercent) {
        double interest = balance * (ratePercent / 100.0);
        balance = balance + interest;
        cout << "\n[Savings Account] Interest Added: " << interest << endl;
        cout << "Updated Balance: " << balance << endl;
    }
};

class CurrentAccount : public BankAccount {
private:
    double minBalance;
    double maintenanceCharge;

public:
    CurrentAccount(int accNo, double bal) : BankAccount(accNo, bal) {
        minBalance = 1000.0;
        maintenanceCharge = 50.0;
    }

    void checkAndDeductCharge() {
        if (balance < minBalance) {
            balance = balance - maintenanceCharge;
            cout << "\n[Current Account] Balance below " << minBalance 
                 << ". Penalty charged: " << maintenanceCharge << endl;
        } else {
            cout << "\n[Current Account] Balance is sufficient. No penalty applied." << endl;
        }
        cout << "Updated Balance: " << balance << endl;
    }
};

int main() {
    int acc1, acc2;
    double bal1, bal2, interestRate;

    cout << "Enter Savings Acc Number & Balance: ";
    cin >> acc1 >> bal1;
    cout << "Enter Interest Rate (%): ";
    cin >> interestRate;
    SavingsAccount sa(acc1, bal1);
    sa.addInterest(interestRate);

    cout << "\nEnter Current Acc Number & Balance: ";
    cin >> acc2 >> bal2;
    CurrentAccount ca(acc2, bal2);
    ca.checkAndDeductCharge();

    return 0;
}