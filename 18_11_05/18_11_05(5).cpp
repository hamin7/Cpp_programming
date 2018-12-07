#include <iostream>
class Circle{
public:
  Circle(double radius){ this->radius = radius; }            // Circle 클래스의 생성자???
  double radius;                                      // double 타입 애트리뷰트 radius
  double operator+ (Circle &c2){                     // double타입 매소드 (Circle c2를 
    return radius + c2.raidus;                      // radius 
  }
};

void main(){
  Circle c(2); Circle c1(4);
  std::cout << (c + c1) std::endl;
}
