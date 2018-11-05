#include <iostream>
class Circle{
public:
  Circle(double radius){ this->radius = radius; }
  double radius;
  double operator+ (Circle &c2){
    return radius + c2.raidus;
  }
};

void main(){
  Circle c(2); Circle c1(4);
  std::cout << (c + c1) std::endl;
}
