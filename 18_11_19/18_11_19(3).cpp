#include <iostream>
using namespace std;
void fun ( void ){     // throws int
	try{      // nested try-catch
		cout << "Before throw in fun" << endl;
		throw (int) 4;     //eject exception
		cout << "After throw in fun" << endl;
	}
	catch( int e ) {
		cout << "inner catch" << e << endl;
		throw;     // rethrowing exception
		cout << "inner catch after throw" << endl;
	}
}

int main(){
	try{
		cout << "Before fun() ... " << endl;
		fun();
		cout << "After fun() ..." << endl;
	}
	catch ( int e ){
		cout << "outer catch" << e << endl;
		cout << "After catch block" << endl;
	}
}

// catch 블럭 안에서도 throw 문 가능?? yes
// 하지만 avoid 해야 함.
/*
Before fun() ...
Before throw in fun
inner catch4
outer catch4
After catch block
*/
