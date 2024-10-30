#include <iostream>
using namespace std;
// Base class 1
class Animal {
public:
void sound() {
cout << "Animals make sound." << endl;
}
};
// Base class 2
class Mammal {
public:
void characteristic() {
cout << "Mammals have fur or hair." << endl;
}
};
// Derived class 1 from both Animal and Mammal
class Dog : public Animal, public Mammal {
public:
void breed() {
cout << "Dogs are domestic mammals." << endl;
}
};

// Derived class 2 from Dog
class Labrador : public Dog {
public:
void behavior() {
cout << "Labradors are friendly." << endl;
}
};
int main() {
Labrador lab;
// Accessing methods from all parent classes
lab.sound(); // Inherited from Animal
lab.characteristic(); // Inherited from Mammal
lab.breed(); // Inherited from Dog
lab.behavior(); // Defined in Labrador class
return 0;
}

