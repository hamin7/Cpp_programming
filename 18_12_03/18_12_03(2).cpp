#include <iostream>
#include <list>
#include <string>

using namespace std;

void main() {
	list<string> names;

	names.push_back("Kim");
	names.push_back("Park");
	names.push_back("Lee");
	names.push_back("Gang");

	// iterator based list output
	for (list<string>::iterator  ai = names.begin();
		                         ai != names.end();
								 ai++)
		cout << *ai << endl;

	cout << endl;
	names.reverse(); // we reverse the list . vector is expensive for reverse

	for (list<string>::iterator  ai = names.begin();      // iterator is powerpoint.  set the begin pointer to the first element(kim)
		                         ai != names.end();       // special pointer / indication there is no name anymore
								 ai++)     // pointer to the next element
		cout << *ai << endl;

}
