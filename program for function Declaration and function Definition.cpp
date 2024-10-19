#include <iostream>
using namespace std;

//function Declaration 
int add (int a ,int b);

int main() {
  int x=45 ,y=45;
  
  //function call
  cout<<"Sum:"<<add(x,y)<<endl;
  
  return 0;
}

  //function Definition 
  int add ( int a , int b){
    return a+b;
  }