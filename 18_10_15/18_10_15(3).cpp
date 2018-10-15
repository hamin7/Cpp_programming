#include <iostream>
// cuz of reference variable in C++ pointer is not important
void fun( int arr[] )//( const int * const p)  // read only pointer
{
  int i;
  int *p = arr + 2;     // 2position upword
  std::cout << (p - arr) << std::endl;     // outcome is 2
  *(arr + 1) = 7;     // pointer arithmetic // *(arr - 1)은 안됌
  arr[1] = 7;
}

void main()
{
  int i = 4;
  int arr[10] = { 2, 6, 7, 1, 3 };
  fun( arr );
  std::cout << arr[0] << std::endl;
}
