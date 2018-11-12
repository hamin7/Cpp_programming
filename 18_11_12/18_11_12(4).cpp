#include <iostream>

//polymorphism  // dynamic binding(performance killer) vs static binding
// C++은 이중상속 가능함
class A :{
public: virtual void m() { std::cout << "In A" << std::endl; }
  //double attr;
};

class B : public A{
public: virtual void m() { std::cout << "In B" << std::endl;}
};

class C : public B { // multiple inheritance
};

void main(){
  C *ptr;
  ptr = new C();   // creates a heap object in C++
  ptr = NULL;
  delete ptr;      // memory leakage == zombie memory
}
