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

// 다형성 == A타입의 포인터는 subclass인 B, C 를 참조할 수 있다 
// 동적바인딩 == 컴파일 시 결정 나지 않고 런타임시 결정
// 정적바인딩은 컴파일 시 결정
