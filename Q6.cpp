#include <iostream>
using namespace std;

class Player {
public:
    string name;
    static int totalPlayers;   

    Player(string n) {
        name = n;
        totalPlayers++;
        cout << name << " joined.." << endl;
    }

    ~Player() {
        cout << name << " left.." << endl;
        totalPlayers--;
    }

    static void showPlayers() {
        cout << "Total Players Online: " << totalPlayers << endl;
    }
};

int Player::totalPlayers = 0;

int main() {

    {
        Player p1("Sumaima");
        Player p2("Aaisha");
        Player p3("Zainab");

        Player::showPlayers();   // (block k andr)
    }

    cout << "After block ends:" << endl;
    Player::showPlayers();       // (after destructor executed)
    return 0;
}


