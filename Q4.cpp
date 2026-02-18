#include <iostream>
using namespace std;

class Engine {
private:
    int horsepower;

public:
    void setEngine(int hp) {
        horsepower = hp;
    }

    int getHorsepower() const {
        return horsepower;
    }
};

class Car {
private:
    string model;
    Engine engine;   //class k andr class

public:
    void setCar(string m, int hp) {
        model = m;
        engine.setEngine(hp);
    }

    void showCar() const {
        cout << "Car Model: " << model << ", Engine Horsepower: " << engine.getHorsepower() << " HP" << endl;
    }
};

int main() {
    Car c1, c2;
    c1.setCar("Hyundai Tucson", 187);
    c2.setCar("Honda Vezel", 150);
    
    c1.showCar();
    c2.showCar();
    return 0;
}

