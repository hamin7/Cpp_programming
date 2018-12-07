#include <iostream>

class Circle{
private:
  double radius;     // attribute 정의

public:
  // Constructor 생성자!!
  Circle( double r ){              // Circle이라는 생성자는 r을 받아서 
    radius = r >= 0? r : 0;    // r>=0 이라면 r을 리턴하고 아니라면 0을 리턴
  }
  double area()     // method area정의
  {
    return radius * radius * 3.14;    // 넓이 area()는 radius * radius * 3.14
  }
};

void main()
{
  Circle c(3.0);     // initialization of public members only!   // defines an object
  std::cout << c.get_area() << std::endl;     // 오브젝트 c의 area를 출력
}

http://unikys.tistory.com/355
