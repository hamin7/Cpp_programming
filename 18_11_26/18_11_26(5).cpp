#include <iostream>     // templated class
#include <string.h>

template <typename TP>

TP max( TP a, TP b){
return a > b ? a : b;
}
// template specialization

int main(){
// lexicographic grapic이 큰게 출력 될 것 여기서는 B
const char * a = "A";
const char * b = "B";
const char * k = max( a, b );     // type inference
std::cout << k << std::endl;
}      // function

/*
b
*/
