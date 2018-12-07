#include <iostream>
class Circle{
public:
  Circle(double radius){ this->radius = radius; }            // Circle 클래스의 생성자???  
  double radius;                                      // double 타입 애트리뷰트 radius
  double operator+ (Circle &c2){                     // double타입 매소드 operator 오버로딩
    return radius + c2.raidus;                      // radius 
  }
};

int main(){
  Circle c(2); 
	Circle c1(4);
	Circle c2(6);
	std::cout << (c + c1) std::endl;
}
