#include <iostream>
using namespace std;
// Base class
class Animal {
public:
void eat() {
cout << "I can eat!" << endl;
}
};
// Derived class
class Dog : public Animal {
public:
void bark() {
cout << "I can bark!" << endl;
}
};
int main() {
Dog dog1;
// Dog can access both its own method and inherited methods
dog1.eat(); // Inherited from Animal
dog1.bark(); // Defined in Dog class
return 0;
}

