#include <iostream>     // templated class
#include <string.h>

template <typename TP>

TP max( TP a, TP b){
return a > b ? a : b;
}
// template specialization
template<>
const char* max( const char *a, const char *b){
return strcmp( a, b ) ? a : b;
}

int main(){
// lexicographic grapic 이 큰게 출력 될것 여기서는 B
const char * a = "A";
const char * b = "B";
const char * k = max( a, b );     // type inference
std::cout << k << std::endl;
}      // function
