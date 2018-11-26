#include <iostream>     // templated class

template <typename TP1, int I>     // integral parameter   // cpp 의 장점은 performance 특히 template의 code optimization 덕분에

class list{
	public:
	TP1 key1;
	list<TP1, I+1> *next;
	void m() {
		std::cout << I << std::endl;
	}
};

int main(){
	// (Type) Instantiation
	list<double, 0> my_list;
	my_list.m();
}     // function