#include <iostream>
using namespace std;

int main(){
	while ( true ){
		try{
			cout << "Before throw ... " << endl;
			throw (double)3;     // eject exception
			cout << "After throw ..." << endl;
		}
		catch ( int e ){
			cout << "In int catch with exceptiron" << e << endl;
		}
		catch( double e ){
			cout << "In double catch with exception" << e << endl;
		}
	}
	cout << "After catch block" << endl;
}
