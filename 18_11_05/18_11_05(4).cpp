#include <iostream>
class Circle{
public:
  Circle(double radius){ this->radius = radius; }
  double radius;
  double area(){
    return radius*radius*3.14;
  }
};
double operator+ (Circle &c1, Circle &c2){
  return c1.radius + c2.raidus;
}
void main(){
  Circle c(2); Circle c1(4);
  std::cout << (c + c1) std::endl;
}
