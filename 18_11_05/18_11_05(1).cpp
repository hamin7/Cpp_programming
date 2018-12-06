#include <iostream>


class Circle{
public:
  static int counter;     // is merely a declaration
  Circle(){ counter++; }      // default construct.  기본생성자

  double radius;

  double area(){
    return radius*radius*3.14;
  }
};
// int couunter = 0;     // global variable
int Circle::counter = 0;        // Circle 클래스의 counter = 0으로 세팅

void main(){
  Circle c;          // 오브젝트 c 선언
  Circle c1;         // 오브젝트 c1 선언
  std::cout << Circle::counter << std::endl;
}
