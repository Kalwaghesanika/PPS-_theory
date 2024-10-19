#include <iostream>
using namespace std;

// Recursive function to calculate factorial
int factorial(int n) {
    if (n <= 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int num = 10;

    // Function call
    cout << "Factorial of " << num << " is: " << factorial(num) << endl;
    
    return 0;
}
