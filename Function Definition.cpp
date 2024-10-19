#include <iostream>
using namespace std;

void fun(int x)
{
    // definition of  function
    x = 24;
}
int main()
{
    int x = 15;
    fun(x);
    cout << "x = " << x;
    return 0;
}

