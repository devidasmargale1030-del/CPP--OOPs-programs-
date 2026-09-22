// Program 10: Function Overriding

#include <iostream>
using namespace std;

class Vehicle {
public:
    virtual void move() const {
        cout << "Vehicle is moving\n";
    }

    virtual ~Vehicle() = default;
};

class Car : public Vehicle {
public:
    void move() const override {
        cout << "Car moves on roads\n";
    }
};

class Boat : public Vehicle {
public:
    void move() const override {
        cout << "Boat moves on water\n";
    }
};

int main() {
    Car car;
    Boat boat;

    car.move();
    boat.move();

    return 0;
}

/*
Expected Output:
Car moves on roads
Boat moves on water
*/
