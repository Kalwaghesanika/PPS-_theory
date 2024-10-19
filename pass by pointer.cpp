#include <iostream>
#include <string>
using namespace std;

void printString(const string* str) { // Note the 'const' to prevent modification
    cout << *str << endl;
}
int main() {
   string myString = "This is Pss by pointer";
    printString(&myString);
    return 0;
}
