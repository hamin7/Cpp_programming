#include <iostream>
class Circle{
private:
  double radius;
public:
  Circle(double radius){ this->radius = radius; }
  //double operator+ (Circle &c2){
  //  return radius + c2.raidus;
  //}
  friend double operator+ ( double d, Circle &c2);
};
double operator+ ( double d, Circle &c2){
  return d + c2.radius;
}

int main(){
	double k = 3.0;
	Circle c(2); 
	Circle c1(4);
	std::cout << (k + c1) << std::endl;
}
