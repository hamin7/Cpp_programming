#include <iostream>

class Circle{
public:
  // Constructor
  Circle( double r ) : radius(r >= 0 ? r : 0){      // radius는 r>=0이라면 r을 리턴하고 아니라면 0을 리턴
  }
  const double radius;     // attribute radius를 const로 정의
  double area()     // method area()를 정의
  {
    return radius * radius * 3.14;     // 넓이는 radius * radius * 3.14
  };
};

void main()
{
  Circle c(3.0);     // initialization of public members only!   // defines an object
  // Circle c; 이렇게 하면 에러남 (컴파일러가 자동으로 기본생성자 안 만들어쥼 위에 기본생성자가 있었다면 괜찮)
  // 클래스 정의할때 생성자 정의가 아무것도 없으면 기본생성자만 자동으로 생성 (7)참고
  std::cout << c.get_area() << std::endl;     // 오브젝트 c의 넓이를 구하여라
}
