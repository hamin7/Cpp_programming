#include <iostream>
class Circle{
private:
  double radius;
public:
  double area() { return radius * radius * 3.14; }
  Circle( double radius ) { this -> radius = radius; }
  friend class Cylinder;
};
class Cylinder : public Circle {
public:
  double height;
  double volume(){ return height * Circle::area(); }
  // surface of the Cylinder
  double area() { return 2 * Circle::area()
    + 2 * radius * 3.14 * height; }
};
