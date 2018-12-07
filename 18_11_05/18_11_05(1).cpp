#include <iostream>

// int couunter = 0;     // global variable
int Circle::counter = 0;
class Circle{
public:
  static int counter;     // is merely a declaration
  Circle(){ counter++; }      // default construct

  double radius;

  double area(){
    return radius*radius*3.14;
  }
};

void main(){
  Circle c; Circle c1;
  std::cout << Circle::counter << std::endl;
}
