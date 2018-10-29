#include <iostream>
#include "Circle.h"     // header type

class Circle{
public:
  double radius;     // attribute
  double attr2;
  double area()     // method
  {
    return radius * radius * 3.14;
  }
};

void main()
{
  Circle c = { 2.0, 3.0 };     // initialization of public members only!
  Circle c1;     // defines an object
  c1.radius = 12.0;
  std::cout << c.area() << std::endl;
}