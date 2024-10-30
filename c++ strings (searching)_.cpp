#include <iostream>
#include <string>
using namespace std;

int main() {
string text = "Hello World";
size_t pos = text.find("World"); // Finds "World" in "Hello World"
if (pos != string::npos) {
cout << "'World' found at position: " << pos << endl;
} else {
cout << "'World' not found" << endl;
}
return 0;
}

