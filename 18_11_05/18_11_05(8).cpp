#include <iostream>
class Circle{
public:
	double radius;
	Circle(double radius){ this->radius = radius; }
};
std::ostream & operator<< ( std::ostream &out, Circle &c){     // only output stream
	out << "Circle with radius " << c.radius;
	return out;
}

int main(){
	Circle c(2); 
	Circle c1(4);
	(std::cout << c1) << std::endl;      // 
}
