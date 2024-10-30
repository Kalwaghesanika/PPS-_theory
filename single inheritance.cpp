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
// Calling member of base class
dog1.eat();
// Calling member of derived class
dog1.bark();
return 0;
}

