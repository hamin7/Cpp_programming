#include <iostream>

class Circle{           // Circle 클래스 정의
private:
  double radius=1;        // 애트리뷰트 radius 선언
public:
  double area(){         // 메소드 area() 선언 
    return radius*radius*3.14;     // 넓이!!
  }
  friend class ExtClass;         // Circle은 Extclass를 친구로 생각함!
};

class ExtClass{            // 클래스 ExtClass 선언 
  Circle c;  // 오브젝트 c
	public:
  void fun(){              // 메소드 fun()
    c.radius = 2;           // 오브젝트 c의 radius에 2 대입
	 std::cout << c.area() << std::endl;
  }
};

int main(){
  Circle c; 
	ExtClass c1;
  std::cout << c.area() << std::endl;
	c1.fun();
}

