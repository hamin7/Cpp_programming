#include <iostream>
class A{
protected:       // you can read and write the attribute we get access in subclasses
  double attr;
};
class B : public A {
public:
  B *obj;
  void method1() { std::cout << this->attr << std::endl; }
  void method2() { std::cout << obj->attr << std::endl; }
};
class C {
public:
  void method() { std::cout << attr << std::endl; }
};
void main(){

}
