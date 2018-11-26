#include <iostream>     // templated class
template<int I>
class A{
	public:
	A<I - 1> attr;
	int m( void ) { return I + attr.m();} 
};

template<>
class A<0>     // I == 0
{
public:
int m(void) { return 0;}
};

int main(){
A<6> obj; std::cout << obj.m() << std::endl;
}      // function
