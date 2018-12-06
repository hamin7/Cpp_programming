#include <iostream>

class Circle{
public:
  double radius;     // attribute 애트리뷰트가 무엇인고!!!
  double area()     // method 함수랑 비슷
  {
    return radius * radius * 3.14;  // 넓이는 반지름 제곱 * 3.14
  }
};

void main()
{
  Circle c;     // defines an object 오브젝트를 정의하고
  c.radius = 2.0;  // 정의된 c에 radius는 2.0이라고 넣어주고
  Circle c1;     // defines an object c1이라는 원 오브젝트를 정의
  c1.radius = 12.0;  // c1의 반지름은 12.0이다
  std::cout << c.area() << std::endl;  // c의 넓이를 메소드를 이용하여 구하고 출력하자
}
