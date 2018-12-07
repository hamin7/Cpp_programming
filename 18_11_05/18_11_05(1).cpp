#include <iostream>


class Circle{
public:
  static int counter;     // is merely a declaration
  Circle(){ counter++; }      // default construct.  기본생성자

  double radius;

  double area(){
     counter++;
    //return radius*radius*3.14;
  }
};
// int couunter = 0;     // global variable
int Circle::counter = 0;        // Circle 클래스의 counter = 0으로 세팅.  얘 안에서 하면 안돌아감 왜냐면 그렇게 하면 static 하는 의미가 없으니까 객체 생성시마다 초기화가 되는거니까

void main(){
  Circle c;          // 오브젝트 c 선언
  Circle c1;         // 오브젝트 c1 선언
  c.area();
  std::cout << Circle::counter << std::endl;
}
