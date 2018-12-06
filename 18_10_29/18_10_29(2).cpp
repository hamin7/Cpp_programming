#include <iostream>
#include "Circle.h"     // header type
double Circle::area(){      // ::는 스코프 지정자  // 네임스페이스 Circle 안에 있는 함수 area() 호출. // 헤더 파일 Circle.h에서 정의 되있을껴
  return radius * radius * 3.14;       // 
}

void main()
{  
  Circle c = { 2.0, 3.0 };     // initialization of public members only!
  Circle c1;     // defines an object 오브젝트 c1을 정의함
  c1.radius = 12.0;      // 오브젝트 c1의 Radius에 12.0을 넣음
  std::cout << c.area() << std::endl;     // 
}

// foo(); -> 컴파일 에러 
//::foo(); -> 전역 함수의 foo() 호출
//A::foot(); // -> 네임스페이스 A 안에 있는 함수 foo() 호출
