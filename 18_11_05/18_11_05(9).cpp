#include <iostream>
class Circle{
public:
	double radius;            // 반지름
	double area() { return radius * radius * 3; }      // 넓이는 r*r*3.14
	//Circle( double radius ) { this -> radius = radius; }      // Circle 클래스의 반지름은 매갸변수로 받은 radius
};

class Cylinder : public Circle {                 // Circle 클래스를 상속
public:
	double height;               // 실린더의 높이
	double volume(){ return height * Circle::area(); }     // 부피는 높이 * 넓이
	// surface of the Cylinder
	double area() { return 2 * Circle::area() + 2 * radius * 3 * height; }       //// 겉면적 == (윗면 넓이*2) + (2파이r * 높이)
};

int main(){
	Cylinder y;
	y.radius = 2.0;
	y.height = 4.0;
	std::cout << y.area() << std::endl;
	std::cout << y.volume() << std::endl;
}

// line6이 있으면 안되는 이유는?
