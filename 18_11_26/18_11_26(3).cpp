#include <iostream>     // templated class

template <typename TP>

TP max( TP a, TP b){
return a > b ? a : b;
}

int main(){
int i, j;
i = 5; j = 6;
int k = max<int>( i, j );     // type inference
std::cout << k << std::endl;
}