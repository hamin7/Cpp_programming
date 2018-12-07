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
  return d + c2.raidus;
}

void main(){
  Circle c(2); Circle c1(4);
  std::cout << (c + c1) std::endl;
}


흠 뭔가 이상
