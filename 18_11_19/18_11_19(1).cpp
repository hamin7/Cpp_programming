#include <iostream>
using namespace std;

int main(){
		try{
			cout << "Before throw ... " << endl;
			throw (double)3;     // eject exception
			cout << "After throw ..." << endl;
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
output
Before throw ...
In elipsis catch with exception
After catch block
*/
