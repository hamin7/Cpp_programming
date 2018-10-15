#include <iostream>
// cuz of reference variable in C++ pointer is not important
void fun( int * p )//( const int * const p)  // read only pointer
{
  int i;
  p = &i;
  p[0] = 7;
}

void main()
{
  int i = 4;
  int arr[10] = { 2, 6, 7, 1, 3 };
  fun( arr );
  std::cout << arr[0] << std::endl;
}
