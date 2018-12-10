#include <iostream>
using namespace std;

class Exception {
public:
	int code;
	Exception(){ 
		this -> code = 1; }
	Exception( int code ){ this->code = code;
						 cout << "construction" << endl; }
	virtual void what() {cout << "Problem code is" << this->code << endl;}
	~Exception(){cout << "destruction" << endl;}
};

class DerivedException : public Exception{
	public:
	DerivedException() { this->code = 1; }
	DerivedException( int code ){ this -> code = code; }
	virtual void what() {cout << "In dereived class ..." << code << endl;}
	
};

int main(){
	try{
		cout << "Before try ... " << endl;
		throw DerivedException( 2 );
		cout << "After try ..." << endl;
	}
	catch ( Exception &e ){      // call by value
		e.what();
	}
	cout << "After catch block" << endl;
}

/*
Before try ...
In dereived class ...2
destruction
After catch block
*/
