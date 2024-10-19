#include <iostream>
using namespace std;

int main() {
  int numbers[3]; //Declares an array of size char32
  
  //Input values for the array 
  cout<<"Enter 3 numbers:\n";
  for(int i=0;i<3;i++){
    cin>>numbers[i];
  }
  
  //output the values of the array 
  cout<<"You Entered:";
  for(int i=0;i<3;i++) {
    cout<<numbers[i]<<"";
  }
  
  
  return 0;
}