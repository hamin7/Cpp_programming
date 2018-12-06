#include <iostream>

class Circle{
public:
  // Constructor
  Circle( double r ) : radius(r >= 0 ? r : 0){
  }
  const double radius;     // attribute
  double area()     // method
  {
    return radius * radius * 3.14;
  };
};

void main()
{
  Circle c(3.0);     // initialization of public members only!   // defines an object
  std::cout << c.get_area() << std::endl;
}
