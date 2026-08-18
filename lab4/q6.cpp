#include <iostream>
using namespace std;

class Door {
private:
    int doorNumber;
    bool isLocked;
public:
    Door(int num, bool status) : doorNumber(num), isLocked(status) {}

    friend class SecuritySystem;
};
class SecuritySystem {
public:
    void checkLockStatus(const Door& d) {
        cout << "Door " << d.doorNumber << " Status: "  << (d.isLocked ? "Locked" : "Unlocked") << endl;
    }
};

int main() {
    Door frontDoor(1, true);
    SecuritySystem sys;
    sys.checkLockStatus(frontDoor);
    return 0;
}