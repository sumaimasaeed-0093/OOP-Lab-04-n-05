#include <iostream>
using namespace std;

class Weapon {
public:
    string weaponName;
    int damage;

    Weapon() {}

    Weapon(string w, int d) {
        weaponName = w;
        damage = d;
    }
};

class Player {
private:
    string playerName;
    int health;
    Weapon weapon;

public:
    static int activePlayers;

    Player(string name, int h, string wName, int dmg): weapon(wName, dmg) {
        playerName = name;
        health = h;
        activePlayers++;
        cout << ">> " << playerName << " has entered the arena with a " << weapon.weaponName << "!\n";
    }

    ~Player() {
        cout << ">> " << playerName << " has left.\n";
        activePlayers--;
    }

    void showStatus() const {
        cout << "Name: " << playerName << endl;
        cout << "Health Level: " << health << endl;
        cout << "Equipped Weapon: " << weapon.weaponName << endl;
        cout << "Weapon Damage: " << weapon.damage << endl;
        cout << "Players currently online: " << activePlayers << endl;
    }
};

int Player::activePlayers = 0;

int main() {

    {
        Player players[3] = {
            Player("Sumaima", 100, "Sword", 60),
            Player("Zainab", 90, "Bow", 45),
            Player("Aaisha", 110, "Gun", 70)
        };

        for(int i = 0; i < 3; i++) {
            players[i].showStatus();
        }

        cout << "\n?? Total players currently battling: " << Player::activePlayers << endl;
    }

    cout << "\nGame ended.\n";
    cout << "Active players now: " << Player::activePlayers << endl;

    return 0;
}


