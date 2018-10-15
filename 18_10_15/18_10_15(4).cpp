//array of pointer
#include <iostream>

void main()
{
  int *arr[2];     // array of pointers to integers
  int r1[] = { 5, 4, 3 };
  int r2[] = { 1, 2}
  arr[0] = r1;
  arr[1] = r2;
  //std::cout << arr[1][1] << std<<endl;     // outcome = 2
  //std::cout << *(*(arr + 1)+1) << std::endl;     //dereference?
}
