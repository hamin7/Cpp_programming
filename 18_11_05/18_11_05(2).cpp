#include <iostream>

class Circle{
private:
	
public:
	double radius;
  double area(){
    return radius*radius*3.14;
  }
  friend void fun( Circle &c );     // friend declaration  클래스 Circle은 메소드 fun을 친구로 생각
};

void fun( Circle &c ){      // &c 안하고 그냥 (Circle c) 하면 에러 남 / 왜??? 에러는 안나지만 결과적으로 c1의 radius값은 안바뀜 용량도 아낄수 있음 왜냐면 call by value는 복사해서 쓰므로 공간이 두배
  c.radius = c.radius * 2;        // 
}

int main(){
  Circle c; 
  Circle c1;
	c.radius = 3.0;
	c1.radius = 2.0;
	std::cout << c1.radius << std::endl;
  fun(c1);
	std::cout << c1.radius << std::endl;
}

