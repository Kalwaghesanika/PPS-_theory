#include <iostream>
#include <string>
using namespace std;

class MyClass {   //The class
public:           //Access specifier
int myNum;       //Attribute (int variable)
string myString; //Attribute (string variable)
};

int main() {
  MyClass myObj;    //create an object of MyClass
  
  //Access attributes and set values
  myObj.myNum = 20;
  myObj.myString = "some text";
  
  //print attribute values
  cout << myObj.myNum << "\n";
  cout << myObj.myString;
  return 0;
}

  
 