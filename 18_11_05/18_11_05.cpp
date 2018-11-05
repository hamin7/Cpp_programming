#include <iostream>

class Circle{
public:
  Circle( double radius ){
    //(*this).radius = radius;      // dereferencing
    this->radius = radius;     //위에 꺼랑 같음
    // this.radius = radius;
  }
  void connect( Circle &c ){
    c.link = this;
  }
  Circle *link;
  double radius;

  double area(){
    return radius*radius*3.14;
  }
};

void main(){

}
