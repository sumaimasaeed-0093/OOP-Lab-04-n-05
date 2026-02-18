#include <iostream>
using namespace std;

class Car {
private:
    int speed;   

public:
    void setSpeed(int s) {
        speed = s;
    }

    void showSpeed() const {
        cout << "Speed of the car is: " << speed << " m/s" << endl;
    }
};

int main() {
    Car c1;
    c1.setSpeed(160);
    c1.showSpeed();

    return 0;
}

