#include <iostream>
using namespace std;

class SecurityScanner {
public:
    virtual void scan(int threats) {
        cout << "Base security scan." << endl;
    }
};

class BasicScanner : public SecurityScanner {
public:
    void scan(int threats) override {
        cout << "Basic Scanner - Threats Detected: " << threats << endl;
    }
};

class AdvancedScanner : public SecurityScanner {
public:
    void scan(int threats) override {
        int remaining = threats - (threats * 0.90); 
        cout << "Advanced Scanner - Threats Detected: " << threats << ", Threats Remaining After Removal: " << remaining << endl;
    }
};

int main() {
    int threats;
    cout << "Enter number of threats detected: ";
    cin >> threats;
    
    BasicScanner basic;
    AdvancedScanner advanced;
    
    basic.scan(threats);
    advanced.scan(threats);
    
    return 0;
}