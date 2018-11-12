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

void main(){
  A objA; A *ptr; B objB; ptr = &objB; (*ptr).m(); // dereferencing ptr (*ptr).m() == ptr->m(); // java와 다른부분
}
