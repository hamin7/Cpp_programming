# include <iostream>
// mutually calling functions

int fun1( int n )
{
  if ( n <= 0)
  {
    return 1;
  }
  else
  {
    return fun2( n - 1);
  }
}

int fun2( int n )
{
  if ( n < = 2 )
  {
    return 3;
  }
  else
  {
    return fun1( n - 1 );
  }
}

void main()
{
  int n = 10;
  std::cout << fun1(n) << std::endl;
}
