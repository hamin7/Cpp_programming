#include <iostream>

int main()
{
  int a, b, g, r, temp;
  std::cout << "Type 2 positive integers." << std::endl;
  std::cin >> a >> b;

  if(a < b){
    temp = a;
    a = b;
    b = temp;
  }

  while(true){
    r = a % b;
    if ( r == 0){
      g = b;
      break;
    }else{
      a = b;
      b = r;
    }
  }

  std::cout << "The greatest common divisior is " << g << std::endl;
  return 0;
}
