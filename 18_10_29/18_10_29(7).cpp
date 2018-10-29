#include <iostream>

class Circle{
public:
  Circle( double r ){     // default Constructor
    std::cout << "Default Constructor called ... " << r << std::endl;
    radius = r;
  }     // Constructor
  double radius;     // attribute
  double area()     // method
  {
    return radius * radius * 3.14;
  };
  ~Circle(){     // destructor?
    std::cout << "Destructor called ... " << radius << std::endl;
  }
};

void main()
{
  Circle c(2);     // defines an object
  Circle c1(4);     // defines an object
  std::cout << c.area() << std::endl;
}
