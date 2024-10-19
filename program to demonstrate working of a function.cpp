#include <iostream>
using namespace std;

//following function that takes two parameters 'x' and 'y' as input & returns max of two input numbers
int max (int x ,int y)
{
  if(x>y)
   return x;
  else
   return y;
}

//main function that  does not receive any paameter and returns integer 
int main() 
{
  int a=36, b=96;
  
  //calling above function to find max of 'a' and 'b'
  int m=max(a,b);
  
  cout<<"m is"<<m;
  return 0;
}