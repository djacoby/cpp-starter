#include "MyClass.h"
#include <iostream>
using namespace std;

int main()
{
  // Create new object of type MyClass
  MyClass newObject = MyClass(1);

  // Call getter on newObject to show it's member variable
  cout << newObject.getSomeMember() << endl;

  // Call setter to change member variable
  newObject.setSomeMember(2);

  // Call getter on newObject to show it's member variable
  cout << newObject.getSomeMember() << endl;

  return 0;
}
