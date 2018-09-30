#include <iostream>

int main()
{
  int h[100];
	int i=0;
	int temp=0;
	std::cin>>h[i];
	while(h[i]!=0){

		temp=temp+h[i];
		std::cout<<temp;
		std::cout<<'\n';
		i++;
		std::cin>>h[i];
	}
	return 0;

}
