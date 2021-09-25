#include "MyClass.h"

// Default constructor
MyClass::MyClass()
{
  someMember = 0;
}

// Full constructor
MyClass::MyClass(int s)
{
  someMember = s;
}

// Getters (accessor functions)
int MyClass::getSomeMember()
{
  return someMember;
}

// Setters (mutator functions)
void MyClass::setSomeMember(int s)
{
  someMember = s;
}

// ----------------------------------------------------------------- //

// You can probably remove this if you're not using it in the project,
// I just commented it out so this project is buildable out of the box

// Destructor (normally not needed)

// MyClass::~MyClass()
// {
// }
