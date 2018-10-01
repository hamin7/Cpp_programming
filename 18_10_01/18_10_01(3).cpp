#include <iostream>
// recursive function
// recursion
int fac( int n )
{
  if ( n <= 1 )
  {
    return 1;
  }
  else
  {
    return n * fac( n - 1 );  // direct recursion
  }
  return p;
}

int iterfac ( fac n )
{
  int p = 1; int i;
  for( i = 1; i <= n; i++) // iteration
  {
    p = p * 1;
  }
  return p;
}

void main()
{
  int n = 4;
  std::cout << fac(n) << std::endl;
}
