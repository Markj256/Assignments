// Runtime polymorphism
// Car (parent) -> Toyota, BMW, Tesla (children)
#include <iostream>
using namespace std;

// Parent class with a VIRTUAL function
class Car {
public:
    virtual void drive() {
        cout << "Car: driving" << endl;
    }
    virtual ~Car() {}   // virtual destructor 
};

// Each child OVERRIDES drive() with its own version
class Toyota : public Car {
public:
    void drive() override {
        cout << "Toyota: smooth, fuel-efficient ride" << endl;
    }
};

class BMW : public Car {
public:
    void drive() override {
        cout << "BMW: fast, sporty ride" << endl;
    }
};

class Tesla : public Car {
public:
    void drive() override {
        cout << "Tesla: silent electric ride" << endl;
    }
};

int main() {
    // A parent pointer can point to ANY child object
    Car* c1 = new Toyota();
    Car* c2 = new BMW();
    Car* c3 = new Tesla();

    // Same call: drive(). Different result, depending on the real object.
    c1->drive();
    c2->drive();
    c3->drive();

    // Works with a parent reference too
    BMW myBmw;
    Car& ref = myBmw;
    cout << "\nUsing a reference:" << endl;
    ref.drive();

    delete c1;
    delete c2;
    delete c3;
    return 0;
}