#include<iostream>
using namespace std;

//Define a car class with a method to display its speed
class Car {
public:
  void displaySpeed(int speed) {
    cout << "The car is moving at" << speed << "km/h." << endl;
  }
};

  int main() {
    //create a car object named myCar
    Car myCar;
    
    //send a message to myCar to execute the displaySpeed method
    int currentSpeed = 100;
    myCar.displaySpeed(currentSpeed);
  
  return 0;
}