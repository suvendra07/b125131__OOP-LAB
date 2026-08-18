#include <iostream>
#include <string>
using namespace std;

class Song {
private:
    string songName;
    string artistName;
    double duration;
public:
    Song(string name, string artist, double dur) : songName(name), artistName(artist), duration(dur) {}

    friend void compareSongs(const Song& s1, const Song& s2);
};
void compareSongs(const Song& s1, const Song& s2) {
    if (s1.duration > s2.duration)
        cout << s1.songName << " is longer than " << s2.songName << endl;
    else if (s2.duration > s1.duration)
        cout << s2.songName << " is longer than " << s1.songName << endl;
    else
        cout << "Both songs have the same duration." << endl;
}

int main() {
    Song song1("Shape of You", "Ed Sheeran", 4.24);
    Song song2("Glass Animals", "Rock Band", 3.56);
    compareSongs(song1, song2);
    return 0;
}