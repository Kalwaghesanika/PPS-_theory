#include <iostream>
using namespace std;

// Function that swaps two integers using reference parameters
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 50, y = 200;
    
    // Before swapping
    cout << "Before swap: x = " << x << ", y = " << y << endl;
    
    // Function call to swap
    swap(x, y);
    
    // After swapping
    cout << "After swap: x = " << x << ", y = " << y << endl;
    
    return 0;
}
