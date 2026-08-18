#include <iostream>
#include <string>
using namespace std;

class TrainSeat {
private:
    int seatNumber;
    string passengerName;
    bool isBooked;
public:
    TrainSeat(int num, string name, bool booked)  : seatNumber(num), passengerName(name), isBooked(booked) {}

    friend class TicketChecker;
};
class TicketChecker {
public:
    void displayDetails(const TrainSeat& ts) {
        cout << "Seat Number: " << ts.seatNumber << endl;
        if (ts.isBooked) {
            cout << "Status: Booked\nPassenger: " << ts.passengerName << endl;
        } else {
            cout << "Status: Available" << endl;
        }
    }
};

int main() {
    TrainSeat s1(14, "Subham Prakash", true);
    TrainSeat s2(15, " ", false);

    TicketChecker tc;
    tc.displayDetails(s1);
    cout<< endl;
    tc.displayDetails(s2);
    return 0;
}