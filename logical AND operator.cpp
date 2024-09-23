#include<iostream>
using namespace std;

int main() {
  int num;
  
  //prompt user for input
  cout << "Enter a number:";
  cin >> num;
  
  //check if the number is between 10 and 20 (inclusive)
  if (num>=10 && num<=20) {
     cout << "The number" << num << "is between 10 and 20.\n";
  }else{
     cout << "The number" << num << "is not between 10 and 20.\n";
  }
   return 0;
  }
  