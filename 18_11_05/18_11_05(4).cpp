#include <iostream>
class Circle{
public:
  Circle(double radius){ this->radius = radius; }     // Circle 클래스 매개변수는 radius 이 클래스의 radius에 radius를 넣자
  double radius;               // double 타입의 애트리뷰트 radius
  double area(){               // double 타입의 매소드 area()
    return radius*radius*3.14;       // 넓이를 구해서 리턴해라
  }
};
double operator* (Circle &c1, Circle &c2){         // 요건 double타입 매소드???   연산자 오버로딩
  return c1.radius * c2.radius;                    // c1과 c2의 반지름을 더해서 리턴해라
}

int main(){
  Circle c(2); 
	Circle c1(4);            // c의 반지름은 2 c1의 반지름은 4
  std::cout << (c * c1) << std::endl;           // 6 :: c와 c1을 더해라
}

