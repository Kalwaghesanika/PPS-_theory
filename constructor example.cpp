#include <iostream>
using namespace std;
class Rectangle {
private:
int length;
int breadth;
public:
// Parameterized Constructor
Rectangle(int l, int b) {
length = l;
breadth = b;
}

// Copy Constructor
Rectangle(const Rectangle &rect) {
length = rect.length;
breadth = rect.breadth;
}
// Method to calculate the area
int area() {
return length * breadth;
}
// Method to display dimensions
void display() {
cout << "Length: " << length << ", Breadth: " << breadth

<< endl;
}
};
int main() {
// Creating an object using parameterized constructor
Rectangle rect1(10, 5);
cout << "Rectangle 1 - ";
rect1.display();
cout << "Area: " << rect1.area() << endl;
// Creating a new object using the copy constructor
Rectangle rect2 = rect1;
cout << "\nRectangle 2 (Copy of Rectangle 1) - ";
rect2.display();
cout << "Area: " << rect2.area()<<endl;
return 0;
}