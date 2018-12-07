#include <iostream>
class Circle{
public:
	Circle() { this->radius = 0; }      // 반지름 = 0
	Circle( double radius ) { this->radius = radius > 0 ? radius : 0; }  // { Circle::radius == this->radius }    // 반지름이 양수이면 채택
	double radius;
	double area() { return radius * radius * 3.14; }
};
class Cylinder : public Circle {
public:
	Cylinder( double radius, double height ) : Circle(radius)     // // superclass constructor
  {
    // this->radius = radius > 0 ? radius : 0;     // code redundancy 아래 코드처럼 해야 함.
    // Circle(radius);   // 이거 대신 앞에 Circle(radius)로 하기
		this->height = height > 0 ? height : 0;         // 눂이가 양수이면 채택
  }
	double height;
	double volume() { return Circle::area() * height; }
	double area() { 2 * radius * 3.14 * height + 2 * Circle::area(); }
};
int main(){
	Cylinder y(3.0, 4.0);
	std::cout << y.volume() << std::endl;
	std::cout << y.area() << std::endl;
}
