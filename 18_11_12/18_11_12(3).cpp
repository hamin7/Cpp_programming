#include <iostream>

//polymorphism  // dynamic binding(performance killer) vs static binding
// C++은 이중상속 가능함
class A{
public: virtual void m() { std::cout << "In A" << std::endl; }
  //double attr;
};

class B : public A {
public: virtual void m() { std::cout << "In B" << std::endl;}
};

class C : public B {
public: virtual void m() {std::cout << "In C" << std::endl; }
};

int main(){
	A objA;       // A의 객체 objA
	A *ptr;       // A의 객체 포인터 ptr
	B objB;       // B의 객체 objB
	ptr = &objB;     // ptr는 objB의 주소를 가리킴
	(*ptr).m(); // dereferencing ptr 역참조 B의 m()매소드를 호출
	//(*ptr).m() == ptr->m(); // java와 다른부분
}
