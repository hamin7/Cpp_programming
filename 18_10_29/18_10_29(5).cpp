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
  std::cout << c.get_area() << std::endl;     // 오브젝트 c의 넓이를 구하여라
}
