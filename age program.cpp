#include<iostream>  //Include the input/output stream library
using namespace std;

int main() {
  int age;  //Declare an integer variable to store the age
  
  //prompt the user for their age
  cout << "Enter a age:";
  cin >> age;  //Read the age from user input
  
  //conditional logic using 'if-else'
  if (age>=18) {
     cout << "You are an adult." << endl;   //Message if age is 18 or older
  }else{
     cout << "You are not an adult." << endl;  //Message if age is less than 18
  }
   return 0; //Return 0 to indicate successful execution
  }
  