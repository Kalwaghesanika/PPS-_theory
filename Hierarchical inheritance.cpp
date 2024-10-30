#include <iostream>
using namespace std;
// Base class
class Animal {
public:
void eat() {
cout << "This animal eats food." << endl;
}
};
// Derived class 1
class Dog : public Animal {
public:
void bark() {
cout << "The dog barks." << endl;
}
};
// Derived class 2
class Cat : public Animal {
public:
void meow() {
cout << "The cat meows." << endl;
}
};

int main() {
Dog myDog;
Cat myCat;
// Both classes can access the eat() method from the base class
myDog.eat();
myDog.bark(); // Dog-specific method
myCat.eat();
myCat.meow(); // Cat-specific method
return 0;
}

