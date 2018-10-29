#include <iostream>

class Circle{
private:
  double radius;     // attribute

public:
  // Constructor
  Circle( double r ){
    radius = r >= 0? r : 0;
  }
  double area()     // method
  {
    return radius * radius * 3.14;
  }
};

void main()
{
  Circle c(3.0);     // initialization of public members only!   // defines an object
  std::cout << c.get_area() << std::endl;
}
