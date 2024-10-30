#include <iostream>
using namespace std;
class DynamicArray {
private:
int* array; // Pointer to hold the base address of the array
int size; // Size of the array
public:
// Constructor: Allocates memory for the array
DynamicArray(int s) : size(s) {
array = new int[size]; // Dynamic memory allocation
cout << "Array of size " << size << " created." << endl;
}
// Destructor: Frees the allocated memory
~DynamicArray() {
delete[] array; // Freeing the dynamically allocated memory

cout << "Array of size " << size << " destroyed." << endl;
}
// Method to set values in the array
void setValue(int index, int value) {
if (index >= 0 && index < size) {
array[index] = value;
} else {
cout << "Index out of bounds!" << endl;
}
}
// Method to display the array contents
void display() {

cout << "Array contents: ";
for (int i = 0; i < size; i++) {
cout << array[i] << " ";
}
cout << endl;
}
};
int main() {
{
DynamicArray arr(5); // Creating a DynamicArray object
arr.setValue(0, 10);
arr.setValue(1, 20);
arr.setValue(2, 30);
arr.setValue(3, 40);
arr.setValue(4, 50);
arr.display(); // Display the array contents
} // Destructor is called here when the object goes out of scope
return 0;
}
