#include <iostream>

class Circle{
private:
  double radius;
public:
  double area(){
    return radius*radius*3.14;
  }
  frined class ExtClass;
};
class ExtClass{
  Circle c;
  void fun(){
    c.radius = 2;
  }
}
void main(){
  Circle c; Circle c1;
  std::cout << std::endl;
}
