#include <iostream>

// index, subscript
int main()
{
  // Warning: largest index is 9
  int arr[10];     // array definition
	int i = 5;
  // indexing of arrays starts with 0
  arr[0] = 10;     // write
  int b = arr[0];     // read
  arr[19] = 50;
  std::cout << arr[19] << std::endl;
	std::cout << i << std::endl;
}
