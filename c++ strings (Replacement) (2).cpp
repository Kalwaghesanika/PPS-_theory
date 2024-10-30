#include <iostream>
#include <string>
using namespace std;

int main() {
string text = "Hello World";
size_t pos = text.find("World");
if (pos != string::npos) {
text.replace(pos, 5, "Universe"); // Replaces "World" with "Universe"
}
cout << "Replaced: " << text << endl;
return 0;
}

