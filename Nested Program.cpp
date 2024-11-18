#include <iostream>
using namespace std;
int main() {
int age;
cout << "Enter your age: ";
cin >> age;
try {
try {
if (age < 0) {
throw "Age cannot be negative!";
}
cout << "Your age is: " << age << endl;
} catch (const char* e) {
cout << "Caught in inner block: " << e << endl;
throw; // Rethrowing to the outer block
}
} catch (const char* e) {
cout << "Caught in outer block: " << e << endl;
}
return 0;
}
