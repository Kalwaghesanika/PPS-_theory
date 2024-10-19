#include <iostream>
using namespace std;

// Function that returns a pointer to an integer
int* getPointer(int &a) {
    return &a;
}

int main() {
    int x = 24;
    
    // Function call to get the pointer
    int *ptr = getPointer(x);
    
    cout << "Value of x: " << x << endl;
    cout << "Address of x: " << ptr << endl;
    cout << "Value at ptr: " << *ptr << endl;
    
    return 0;
}
