#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double angle = 90.0;  // Angle in degrees
    double radian = angle * M_PI / 180.0;  // Convert to radians

    cout << "Sine of 90 degrees: " << sin(radian) << endl;
    cout << "Cosine of 90 degrees: " << cos(radian) << endl;
    cout << "Tangent of 90 degrees: " << tan(radian) << endl;

    return 0;
}
