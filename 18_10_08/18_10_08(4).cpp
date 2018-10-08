#include <iostream>

void fun(int a[4] )
{
	std::cout << a[2] << std::endl;
	a[2] = 5;
}
// index, subscript
int main()
{
  // Warning: largest index is 9
	// int arr[] = { 0, 3, 2, 4, 6 };
	//char arr[] = "AB";
	int arr[] = { 4, 2, 1, 8, 2};
	fun( arr );
	//std::cout << arr[4] << std::endl;
	std::cout << arr [2] << std::endl;
}
