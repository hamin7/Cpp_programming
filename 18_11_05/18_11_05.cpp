#include <iostream>

class Circle{
public:
  Circle( double radius ){          // double타입 radius를 매개변수로 갖는 Circle 생성자
    //(*this).radius = radius;      // dereferencing
    this->radius = radius;     //위에 꺼랑 같음
    // this.radius = radius;   얘는 안됨 왜냐면 this는 클래스 자신을 가리키는 포인터이기 때문에 / 포인터 변수는 .으로 접근할 수 없다
  }
  void connect( Circle &c ){
    c.link = this;         // 
  }
  Circle *link;
  double radius;

  double area(){
    return radius*radius*3.14;
  }
};

void main(){

}

역참조(dereference) https://dojang.io/mod/page/view.php?id=276
