#include <iostream>

int main()
{
	int a,b,c;
		std::cin>>a;
		std::cin>>b;
		std::cin>>c;

		int m;
		m=a;

		if(b>m){
			m=b;
		}
		if(c>m){
			m=c;
		}
		std::cout<<m;

}
