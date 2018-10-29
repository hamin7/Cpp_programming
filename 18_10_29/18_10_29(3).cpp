#include <iostream>

class Circle{

public:
  const double radius;     // attribute
  double area()     // method
  {
    return radius * radius * 3.14;
  }
  double get_radius() { return radius; }
  double set_radius(double r) {
    if( r >= 0){
      radius = r;
    }
    else {
      radius = 0;
    }
  }
};

void main()
{
  Circle c = { -5.0 };     // initialization of public members only!   // defines an object
  c1.set_radius(-1);
  std::cout << c.get_area() << std::endl;
}
