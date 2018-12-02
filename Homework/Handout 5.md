Exercise 1: Given the following C++ code:

~~~cpp
#include <iostream>
void fun() {
	try {
		std::cout << "FA\n";
		throw 3; // line 5
		std::cout << "BA\n";
	}
	catch (int i) {
		std::cout << "FCA " << i << "\n";
	}
	catch (char c) {
		std::cout << "FCB " << c << "\n";
		throw;
	}
	std::cout << "BC\n";
}

void main() {
	try {
		std::cout << "A\n"; 
		fun();
		std::cout << "B\n"; 
	}
	catch (int i) { 
		std::cout << "C " << i << "\n"; 
	}
	catch (double d) { 
		std::cout << "D " << d << "\n"; 
	}
	catch (...) { 
		std::cout << "E\n";
	}
	std::cout << "F\n";
}
~~~

1b) What is the output of the above code, if the throw-statement in line 5 is replaced by:
i) 	throw (double)5.0;
ii) 	throw 'c';
iii) 	throw true;

First try to develop the answers by simply analysing the code. Afterwards take a compiler for verifying whether your answers were right or not.	

i) throw (double)5.0;
A
FA
D 5
F

ii) 	throw ‘c';
A
FA
FCB c
E
F

iii) 	throw true;
A
FA
E
F

2. a) Extend the above code by adding an exception class for exception-object creation. Your exception class should comprise an error indicating attribute (e.g. by using an integer.) and an appropriate constructor.
~~~cpp
class Exception{
	public:
	Exception(int Int_Code){
		Int_ErrorCode = Int_Code;
	}
	int Int_ErrorCode;
};
~~~

b) Change the throw statement in line 5 so that it throws objects of your exception class.
~~~cpp
void fun(){
	try{
		std::cout << "FA\n";
		throw Exception(3);; 
		std::cout << "BA\n";
	}
	catch (int i){
		std::cout << "FCA" << i << "\n";
	}
	catch (char c){
		std::cout << "FCB" << c << "\n";
		throw;
	}
	std::cout << "BC\n";
}
~~~

c) Add a catch block in main for catching exception-objects of your exception class.
~~~cpp
int main(){
	try{
		std::cout << "A\n";
		fun();
		std::cout << "B\n";
	}
	catch (int i) {
		std::cout << "C" << i << "\n";
	}
	catch (double d){
		std::cout << "D" << d << "\n";
	}
	catch (Exception ex) {
		std::cout << "Exception" << ex.Int_ErrorCode << "\n";
	}
	catch(...){
		std::cout << "E\n";
	}
	std::cout << "F\n";
}
~~~

d) Change your code so that it works with objects created on the heap by using the new operator. Discuss the positive and negative aspects of such an object-reference based approach for exception handling.
~~~cpp
#include<iostream>

class Exception{
	public:
	Exception(int Int_Code){
		Int_ErrorCode = Int_Code;
	}
	int Int_ErrorCode;
};
void fun(){
	try{
		std::cout << "FA\n";
		throw new Exception(3);; 
		std::cout << "BA\n";
	}
	catch (int i){
		std::cout << "FCA" << i << "\n";
	}
	catch (char c){
		std::cout << "FCB" << c << "\n";
		throw;
	}
	std::cout << "BC\n";
}

int main(){
	try{
		std::cout << "A\n";
		fun();
		std::cout << "B\n";
	}
	catch (int i) {
		std::cout << "C" << i << "\n";
	}
	catch (double d){
		std::cout << "D" << d << "\n";
	}
	catch (Exception *ex) {
		std::cout << "Exception" << ex->Int_ErrorCode << "\n";
		delete ex;
	}
	catch(...){
		std::cout << "E\n";
	}
	std::cout << "F\n";
}
~~~
