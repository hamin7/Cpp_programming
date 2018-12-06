#include <iostream>
#include "Circle.h"     // header type

class Circle{
public:
  double radius;     // attribute를 정의
  double attr2;      // attribute를 정의
  double area()     // method 정의
  {
    return radius * radius * 3.14;
  }
};

void main()
{
  Circle c = { 2.0, 3.0 };     // initialization of public members only! public멤버 radius와 attr2를 초기화
  Circle c1;     // defines an object circle 오브젝트 c1을 정의
  c1.radius = 12.0;      // c1오브젝트의 radius를 12.0으로 초기화
  std::cout << c.area() << std::endl;      // 오브젝트 c의 면적을 메소드 area()를 이용하여 구하고 출력
}
