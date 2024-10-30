#include <iostream>
using namespace std;
class Time {
private:
int hours;
int minutes;
int seconds;
public:
// Default Constructor
Time() {
hours = 0;
minutes = 0;
seconds = 0;
}
// Parameterized Constructor
Time(int h, int m, int s) {
hours = h;
minutes = m;
seconds = s;
}
// Method to display time
void displayTime() {
cout << "Time: " << hours << ":" << minutes << ":" <<

seconds << endl;
}
};

int main() {
// Using the default constructor
Time t1;
cout << "Default Time:" << endl;
t1.displayTime();
cout << endl;
// Using the parameterized constructor
Time t2(10, 45, 30);
cout << "Custom Time:" << endl;
t2.displayTime();
return 0;
}
