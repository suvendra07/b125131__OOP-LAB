#include <iostream>
#include <cmath>
using namespace std;

class MatchFormat {
public:
    virtual void calculateTarget(int firstInningsScore) {
        cout << "Base match format target calculation." << endl;
    }
};

class T20Match : public MatchFormat {
public:
    void calculateTarget(int firstInningsScore) override {
        double margin = firstInningsScore * 0.01;
        int target = firstInningsScore + ceil(margin);
        cout << "T20 Match Target Score: " << target << endl;
    }
};

class ODIMatch : public MatchFormat {
public:
    void calculateTarget(int firstInningsScore) override {
        double margin = firstInningsScore * 0.02;
        int target = firstInningsScore + ceil(margin);
        cout << "ODI Match Target Score: " << target << endl;
    }
};

int main() {
    int score;
    cout << "Enter first innings score: ";
    cin >> score;
    
    T20Match t20;
    ODIMatch odi;
    
    t20.calculateTarget(score);
    odi.calculateTarget(score);
    
    return 0;
}