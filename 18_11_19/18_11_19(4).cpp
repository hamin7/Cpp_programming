#include <iostream>
using namespace std;

class Exception {
public:
	int code;
	Exception( int code ){ 
		this -> code = code; 
		cout << "construction" << endl; 
	}
	void what() {cout << "Problem code is " << code << endl;}
	~Exception(){cout << "destruction " << endl;}
};

int main(){
	try{
		cout << "Before try ... " << endl;
		throw Exception( 2 );
		cout << "After try ..." << endl;
	}
	catch ( Exception e ){      // call by value
		e.what();
	}
	cout << "After catch block" << endl;
}


/*
Before try ...
construction
Problem code is 2
destruction
destruction
After catch block
*/
