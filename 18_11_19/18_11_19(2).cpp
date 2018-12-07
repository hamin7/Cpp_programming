#include <iostream>
using namespace std;
void fun ( void ){     // throws int
	cout << "Before throw in fun" << endl;
	throw 4;     //eject exception
	cout << "After throw in fun" << endl;
}
int main(){
	try{
		cout << "Before fun() ... " << endl;
		fun();
		cout << "After fun() ..." << endl;
	}
	catch ( int e ){
		cout << "In int catch with exceptiron" << e << endl;
	}
	catch( ... ){
		cout << "In elipsis catch with exception" << endl;
	}
	cout << "After catch block" << endl;
}

/*
Before fun() ...
Before throw in fun
In int catch with exceptiron4
After catch block
*/
