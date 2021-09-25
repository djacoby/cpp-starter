class MyClass
{
public:
  // constructors/ functions
  MyClass();
  MyClass(int);
  // getter "accessor functions" (used to return private scoped member variables)
  int getSomeMember();

  // setter "mutator functions" (used to modify private scoped member variables)
  void setSomeMember(int);

private:
  // member variables
  int someMember;
};
