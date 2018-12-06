#include <iostream>

class Circle{
public:
  const double radius;     // attribute radius 선언
  double area()     // method area() 선언
  {
    return radius * radius * 3.14;      // 면적 area()는 반지름 radius * radius * 3.14
  }
  double get_radius() { return radius; }.      // radius를 get하고 그 값을 리턴해라
  double set_radius(double r) {                // radius를 set해라 // r을 radius로 세팅하라는거야
    if( r >= 0){
      radius = r;                 // r이 양수라면 radius는 r이다
    }
    else {
      radius = 0;              // 음수라면 radius는 0 이다. 왜냐면 반지름이 양수일수는 없으니까
    }
  }
};

void main()
{
  Circle c = { -5.0 };     // initialization of public members only!   // defines an object // 오브젝트 Circle의 c를 -5.0으로 정의
  c1.set_radius(-1);       // c1의 radius를 -1로 정의
  std::cout << c.get_area() << std::endl;          // c의 area를 
}


static
: 선언을 하게 되면 그 위치에 상관없이 프로그램의 시작부터 끝까지 메모리에 할당돼 있으면서 그 값을 마음대로 바꿀 수 있는 것. 
 위치에 대해서는 전역변수든 지역변수든 상관 없다.

const
: 해당 변수를 초기화한 이후에는 절대로 바꾸지 못하도록 선언하는 것.
  초기화가 되고 나면 그 이후에는 절대 값을 바꿀 수 없게 된다.
