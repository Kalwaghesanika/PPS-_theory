#include<iostream>
using namespace std;

//Driver code
int main()
{
  //switch variable
  char x = 'A';
  
  //switch statements
  switch (x) {
  case 'A':
      cout << "Choice is A";
      break;
  case 'B':
      cout << "Choice is B";
      break;
  case 'c':
      cout << "choice is c";
      break;
  default:
      cout << "Choice other than A,B and c";
      break;
  }
  return 0;
}