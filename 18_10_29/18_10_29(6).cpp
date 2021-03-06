#include <iostream>

class Circle{
public:
  Circle(){     // default Constructor 기본생성자!!!!!
    std::cout << "Default Constructor called ... " << std::endl;
    radius = 0.0;          // radius에 0.0을 대입
  }     // Constructor
  const double radius;     // attribute radius 정의
  double area()     // method area()
  {
    return radius * radius * 3.14;       // area == radius * radius  3.14
  };
  ~Circle(){     // destructor?
    std::cout << "Destructor called ... " << std::endl;
  }
};

void main()
{
  Circle c;     // initialization of public members only!   // defines an object
  std::cout << c.area() << std::endl;
}

생성자(constructor)란... 오브젝트가 만들어지는 순간에 딱 한 번 실행되는 함수인데요...
반드시 오브젝트가 만들어지는 순간에만 실행됩니다.
이미 만들어진 오브젝트에 대해서는 생성자를 우리가 임의로 호출할 수가 없어요.
그래서 생성자는 보통 어떤 오브젝트가 맨 처음 생성됐을 때 할 수 있는 일인
멤버 변수 초기화 등의 역할을 합니다. 특히 그것에 최적화되어 있어요.

기본 생성자는 매개변수가 하나도 없는 생성자입니다.
생성자를 따로 만들지 않으면 자동으로 내용이 없는 기본 생성자가 클래스에 대해서 만들어집니다.
  그리고 오브젝트를 만들 때마다 그 기본 생성자가 실행됩니다.
(오브젝트를 만들 때마다 어떻게든 어떤 생성자는 실행되게 됩니다.)
1. 생성자의 이름은 반드시 해당 클래스의 이름과 동일해야 하며
2. 리턴값의 자료형을 쓰면 안 됩니다. 네. 없어요. void도 아닙니다.
생성자는 반드시 public에 선언해야 해요!
private에 선언하면... 생성자를 밖에서 못 불러서 에러 납니다.

destructor는 소멸자인데 왜 필요한가? 메모리를 해제하기 위함인데 용량 때문일까?
