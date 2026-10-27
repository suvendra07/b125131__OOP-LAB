#include <iostream>
using namespace std;

class Robot {
public:
    virtual void move(double distance) {
        cout << "Robot base movement." << endl;
    }
};

class WheeledRobot : public Robot {
public:
    void move(double distance) override {
        double time = distance / 2.0; 
        cout << "Wheeled Robot Travel Time: " << time << " seconds." << endl;
    }
};

class TrackedRobot : public Robot {
public:
    void move(double distance) override {
        double time = distance / 1.2; 
        cout << "Tracked Robot Travel Time: " << time << " seconds." << endl;
    }
};

int main() {
    double distance;
    cout << "Enter travel distance in meters: ";
    cin >> distance;
    
    Robot* rPtr;
    
    WheeledRobot wheeled;
    TrackedRobot tracked;
    
    rPtr = &wheeled;
    rPtr->move(distance); 
    
    rPtr = &tracked;
    rPtr->move(distance); 
    
    return 0;
}