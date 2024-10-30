#include <iostream>
using namespace std;
// Base class 1
class Engine {
public:
void engineSound() {
cout << "Engine is running..." << endl;
}
};
// Base class 2
class Wheels {
public:
void wheelType() {
cout << "Car has four wheels" << endl;
}
};
// Derived class inheriting from both Engine and Wheels
class Car : public Engine, public Wheels {
public:
void carFeature() {
cout << "Car has AC" << endl;
}
};

int main() {
Car myCar;
// Accessing methods from both base classes
myCar.engineSound(); // Inherited from Engine
myCar.wheelType(); // Inherited from Wheels
myCar.carFeature(); // Defined in Car class
return 0;
}



