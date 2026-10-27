#include <iostream>
using namespace std;

class Delivery {
public:
    virtual void estimateTime(double distance) {
        cout << "Base delivery estimation." << endl;
    }
};

class BikeDelivery : public Delivery {
public:
    void estimateTime(double distance) override {
        double time = (distance / 20.0) * 60.0 + 5.0; 
        cout << "Bike Delivery Estimated Time: " << time << " minutes." << endl;
    }
};

class DroneDelivery : public Delivery {
public:
    void estimateTime(double distance) override {
        double time = (distance / 40.0) * 60.0 + 2.0; 
        cout << "Drone Delivery Estimated Time: " << time << " minutes." << endl;
    }
};

int main() {
    double distance;
    cout << "Enter delivery distance in km: ";
    cin >> distance;
    
    BikeDelivery bike;
    DroneDelivery drone;
    
    bike.estimateTime(distance);
    drone.estimateTime(distance);
    
    return 0;
}