#include <iostream>
//Function overloading
int max( double a, int b ){
  return a > b ? a : b;
}

double max( int a, double b)
{
  return a > b ? a : b;
}

void main(){
  double i = 5;
  double j = 7;
  std::cout << max(i, j) << std::endl;
}
