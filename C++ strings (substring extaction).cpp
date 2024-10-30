#include <iostream>
#include <string>
using namespace std;

int main() {
string text = "Hello World";
string sub = text.substr(6, 5); // Extracts "World" starting at index 6
cout << "Substring: " << sub << endl;
return 0;
}

