#include <iostream>     // templated class

template <typename TP>

TP max( TP a, TP b){
return a > b ? a : b;
}

int main(){
int i;
i = 5;
double j = 6;
int k = max( i, j );     // type inference
std::cout << k << std::endl;
}      // function