#include <iostream>

class Circle{
public:
  double radius;     // attribute
  double area()     // method
  {
    return radius * radius * 3.14;
  }
};

void main()
{
  Circle c;     // defines an object
  c.radius = 2.0;
  Circle c1;     // defines an object
  c1.radius = 12.0;
  std::cout << c.area() << std::endl;
}
