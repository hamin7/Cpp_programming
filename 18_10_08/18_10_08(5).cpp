#include <iostream>

void fun(int a[][4] )
{
	std::cout << a[2][3] << std::endl;
	a[2][3] = 10;
}
// index, subscript
int main()
{
  // Warning: largest index is 9
	// int arr[] = { 0, 3, 2, 4, 6 };
	//char arr[] = "AB";
	int arr[3][4];
	arr[2][3] = 5;
	// fun( arr );
	//std::cout << arr[4] << std::endl;
	std::cout << arr [2][3] << std::endl;
}

1(row index)*4(element row) + 2(colum index)
