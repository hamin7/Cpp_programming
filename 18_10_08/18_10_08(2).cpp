#include <iostream>
// reference parameter
int fun ( const int &a)
{
  int d;
  d = a + 1;
  return d;
}

int main(){
  int b = 3;
  int &c = b;     // reference variable
  std::cout << fun ( c+2 ) << std::endl;
}
