#include <iostream>
// static, extern (modifiers)
int i = 4;    // global variable
extern int b;      // declaration
void fun (void)
{
  static int a = 2;      // static!!!!!!!!!!!!!
  a++;
  std::cout << a << std::endl;
}

void main(){
  fun();
  fun();
  std::cout << b;
}
