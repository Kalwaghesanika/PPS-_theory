#include <iostream>
using namespace std;

// Function definition with a default parameter
void displayInfo(string name, int age) {
    cout << "Name: " << name << ", Age: " << age << endl;
}

int main() {
    // Function calls with and without the second argument
    displayInfo("Rohit", 20);
    displayInfo("Sachin", 25);
    return 0;
}


