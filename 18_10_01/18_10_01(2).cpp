#include <iostream>
// call by value semantics
void fun( int a )
{
  int j;
  a += 10;
  return a;
}

void main()
{
  int i = 4; int j = 10; int k;
  k = fun(i, j);  // actual parameter (argument)
  std::cout << a << " " << k << std::endl;
}

// formal parameter, arguments
// parameter are "passed" to a function
int max( int a, int b )
{
  int m;  // local variable
  if ( a > b )
  {
    m =a;
  }
  else
  {
    m = b;
  }
  return m;
}  // function
