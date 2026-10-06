#include <iostream>
#include <string>
using namespace std;

class Patient {
protected:
    string patientName;
    int patientID;
    int age;

public:
    Patient(string name, int id, int a) {
        patientName = name;
        patientID = id;
        age = a;
    }
};

class InPatient : public Patient {
private:
    double roomChargesPerDay;
    int numberOfDays;

public:
    InPatient(string name, int id, int a, double rate, int days) : Patient(name, id, a) {
        roomChargesPerDay = rate;
        numberOfDays = days;
    }

    void calculateAndDisplayBill() {
        double totalBill = roomChargesPerDay * numberOfDays;

        cout << "\n--- Hospital Patient Bill ---" << endl;
        cout << "Patient ID: " << patientID << endl;
        cout << "Patient Name: " << patientName << endl;
        cout << "Age: " << age << " years" << endl;
        cout << "Stay Duration: " << numberOfDays << " days" << endl;
        cout << "Daily Room Charges: " << roomChargesPerDay << endl;
        cout << "Total Bill Amount: " << totalBill << endl;
    }
};

int main() {
    string name;
    int id, age, days;
    double rate;

    cout << "Enter Patient Name: ";
    cin >> name;
    cout << "Enter Patient ID and Age: ";
    cin >> id >> age;
    cout << "Enter Room Charges per Day and Number of Days: ";
    cin >> rate >> days;

    InPatient p(name, id, age, rate, days);
    p.calculateAndDisplayBill();

    return 0;
}