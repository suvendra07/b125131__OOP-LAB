#include <iostream>
#include <string>
using namespace std;

class Player {
private:
    string playerName;
    int health;
    int score;
    int level;
public:
    Player(string name, int h, int s, int l)   : playerName(name), health(h), score(s), level(l) {}

    friend class GameManager;
};
class GameManager {
public:
    void displayDetails(const Player& p) {
        cout << "Player: " << p.playerName << " Health: " << p.health 
             << " Score: " << p.score << " Level: " << p.level << endl;
    }
    void checkIsAlive(const Player& p) {
        if (p.health > 0)
            cout << p.playerName << " is Alive." << endl;
        else
            cout << p.playerName << " is Defeated." << endl;
    }
    void displayLevelAndScore(const Player& p) {
        cout << "Level: " << p.level << " | Score: " << p.score << endl;
    }
};

int main() {
    Player p1("Scout", 75, 1200, 4);
    GameManager gm;
    
    gm.displayDetails(p1);
    gm.checkIsAlive(p1);
    gm.displayLevelAndScore(p1);
    return 0;
}