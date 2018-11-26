#include <iostream>     // templated class

template <typename TP1, typename TP2>     // Generic programming

class list{
	public:
	TP1 key1; TP2 key2;
	list<TP1, int> *next;
	
};

int main(){
	// (Type) Instantiation
	list<list<int> *> my_list;
	
}     // function