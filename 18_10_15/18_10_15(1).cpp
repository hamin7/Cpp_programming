#include <iostream>
// cuz of reference variable in C++ pointer is not important
void fun( int *p )
{
  *P = 7;
}

void main()
{
  int i = 4;
  //double d;
  int *p = &i;     // pointer (address in memory)
  // void *p   very dangerous cuz you can lose the data??
  //p = &i;     // & is the address operator here
  *p = 5;
  fun ( p );
  std::cout << *p << std::endl;
}
