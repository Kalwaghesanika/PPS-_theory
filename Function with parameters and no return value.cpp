#include <iostream>
using namespace std;

// Function definition that takes two parameters but has no return value
void printSum(int a, int b) {
    cout << "The sum of " << a << " and " << b << " is: " << a + b << endl;
}

int main() {
    // Function call with arguments
    printSum(10,50);
    return 0;
}
