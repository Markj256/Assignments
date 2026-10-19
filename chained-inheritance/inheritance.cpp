//  Chained inheritance
// Vehicle -> Car -> Toyota -> Corolla
#include <iostream>
using namespace std;

// Level 1: Vehicle (top parent)
class Vehicle {
public:
    int wheels = 4;
    void start() {
        cout << "Vehicle: engine started" << endl;
    }
};

// Level 2: Car gets everything from Vehicle
class Car : public Vehicle {
public:
    int doors = 4;
    void openDoors() {
        cout << "Car: " << doors << " doors opened" << endl;
    }
};

// Level 3: Toyota gets everything from Car (and Vehicle)
class Toyota : public Car {
public:
    string country = "Japan";
    void hybridMode() {
        cout << "Toyota: hybrid mode ON" << endl;
    }
};

// Level 4: Corolla gets everything from Toyota, Car and Vehicle
class Corolla : public Toyota {
public:
    string model = "Corolla Cross";
    void showModel() {
        cout << "Corolla: model is " << model << endl;
    }
};

int main() {
    Car myCar;
    Corolla myCorolla;

    cout << "--- Car object ---" << endl;
    myCar.start();        // from Vehicle (inherited)
    myCar.openDoors();    // its own

    cout << "\n--- Corolla object ---" << endl;
    myCorolla.start();       // from Vehicle (3 levels up)
    myCorolla.openDoors();   // from Car (2 levels up)
    myCorolla.hybridMode();  // from Toyota (1 level up)
    myCorolla.showModel();   // its own

    // Inherited data members can be used too
    cout << "\nWheels: " << myCorolla.wheels << endl;
    cout << "Doors: " << myCorolla.doors << endl;
    cout << "Made in: " << myCorolla.country << endl;

    return 0;
}