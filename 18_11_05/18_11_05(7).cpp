#include <iostream>
class Circle{
public:
  double radius;
  Circle(double radius){ this->radius = radius; }
};
void operator<< ( std::ostream &out, Circle &c){     // only output stream
  out << "Circle with radius " << c.radius;
}

void main(){
  Circle c(2); Circle c1(4);
  std::cout << c;
}
