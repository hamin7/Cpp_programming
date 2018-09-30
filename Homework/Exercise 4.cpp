#include <iostream>

int main()
{
  int x,y,i;
	std::cin>>x;
	std::cin>>y;
	if(x>y){
		i=x;
	}
	else{
		i=y;
	}
	while(x%i!=0||y%i!=0){
		i--;
	}
	std::cout<<i;

}
