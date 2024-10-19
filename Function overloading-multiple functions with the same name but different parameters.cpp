#include <iostream>
using namespace std;

// Function to add two integers
int add(int a, int b) {
    return a + b;
}

// Overloaded function to add two doubles
double add(double a, double b) {
    return a + b;
}

int main() {
    // Calling the integer version
    cout << "Sum of integers: " << add(60, 10) << endl;

    // Calling the double version
    cout << "Sum of doubles: " << add(60.5, 10.5) << endl;
    
    return 0;
}


