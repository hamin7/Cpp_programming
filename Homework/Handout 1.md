Handout 1 C++ Programming


Exercise 1
Given the following assignment of variables to values:

Fill in the result values of the conditions in the table below:

Condition                             Result 
(x>y) && !y                             0
(item>MIN)||(DAY!=’M’)                  1
((num*128)<power)&&y                    0
(!(power!=MAX))&&(Sens==num)            1
((y+x)<num)||(DAY==’M’)                 1
(Sens*(!y))!=0                          0
(!x||y)&&(!y||x)                        1


Exercise 2
Write a program in C++ that performs the following tasks:
1.  Read three integer values using cin.
2.  Determine the maximum of the three values entered by the user.
3.  Print the maximum of this three values using cout.

~~~cpp
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
~~~

Exercise 3
Write a program that asks the user to type numbers. After each entry, the program should report the cumulative sum of the entries. The program should terminate when the user enters 0.

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


Exercise 4
Create a program to determine the GCD (Greatest Common Divisor) of two integers x and y using a ‘while loop’. 
Formal description of the Euclidean algorithm
•  Input Two positive integers, a and b. 
•  Output The greatest common divisor, g, of a and b. 
•  Internal computation
1.  If a<b, exchange a and b. 
2.  Divide a by b and get the remainder, r.  If r=0, report b as the GCD of a and b. 
3.  Replace a by b and replace b by r. Return to the previous step. 
#include <iostream>
int main()
{
 int a, b, g, r, temp;
 std::cout << "Type 2 positive integers." << std::endl;
 std::cin >> a >> b;
 if(a < b){
  temp = a;
  a = b;
  b = temp;
 }
 while(true){
  r = a % b;
  if ( r == 0){
   g = b;
   break;
  }else{
   a = b;
   b = r;
  }
 }
 std::cout << "The greatest common divisior is " << g << std::endl;
 return 0;
}
