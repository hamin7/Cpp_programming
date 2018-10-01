#include <iostream>

void main()
{
  bool b1 = true;
  bool b2 = false;
  if( (b1 && b2) || b1 )
  {
    std::cout << "True branch" << std::endl;
  }
  else
  {
    std::cout << "False branch" << stdd::endl;
  }
}
