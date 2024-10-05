#include "library.h"

int main()
{
    MyStack alpha;

  cout << "Let's start by pushing 1, 2, 3 onto the stack." << endl;
  alpha.push(1);
  alpha.push(2);
  alpha.push(3);

  cout << "\nCalling pop() should get us the 3 value: " << alpha.pop() << endl;
  cout << "\nPush on 10, 20, 30..." << endl;
  alpha.push(10);
  alpha.push(20);
  alpha.push(30);

  cout << "\nWe should have five items on the stack. Popping each off should "
       << "see 30, 20, 10, 2, 1 appear, in that order.\n" << endl;

  for (int i = 0; i < 5; i++)
    cout << alpha.pop() << " ";
  cout << endl;

  cout << "\nAnd finally, to test whether an exception is thrown when calling "
       << "pop() on an empty stack..." << endl;

  try
  {
    alpha.pop();
  }
  catch (exception e)
  {
    cout << "An exception was correctly generated." << endl;
  }

  return 0;
}
