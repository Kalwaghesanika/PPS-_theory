#include <iostream>
using namespace std;

void fun(int* ptr) { *ptr = 15; }

int main()
{
    int x = 35;
    fun(&x);
    cout << "x = " << x;

    return 0;
}
