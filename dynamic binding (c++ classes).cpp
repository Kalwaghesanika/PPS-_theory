#include <iostream>
using namespace std;
// Base class
class Shape {
public:
// Virtual function for dynamic binding
virtual void draw() const {
cout << "Drawing a shape" << endl;
}
// Virtual destructor to ensure proper cleanup of derived objects
virtual ~Shape() {}
};
// Derived class Circle
class Circle : public Shape {
public:
// Override the base class function
void draw() const override {
cout << "Drawing a circle" << endl;
}
};
// Derived class Rectangle
class Rectangle : public Shape {
public:
// Override the base class function
void draw() const override {
cout << "Drawing a rectangle" << endl;
}
};
// Function that takes a pointer to Shape and calls its draw method
void renderShape(const Shape* shape) {
shape->draw();
}
int main() {
// Create instances of Circle and Rectangle
Circle myCircle;
Rectangle myRectangle;
// Use pointers to base class
Shape* shape1 = &myCircle;
Shape* shape2 = &myRectangle;
// Call function to render each shape
renderShape(shape1); // Output: Drawing a circle
renderShape(shape2); // Output: Drawing a rectangle
return 0;
}
