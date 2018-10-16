Handout 2 C++ Programming
Department of Information System
2017029134 Lee Hamin

1) Write a function that computes the value of the binomial coefficient
 
2) Embed your function into a little program that reads two integers n and r from std::cin and writes the value of the binomial coefficient to std::cout
 
~~~cpp
#include <iostream>
 
using namespace std;
 
int C(int n, int r){
      int numerator = 1;
      int denominator = 1;
      for ( int i = n; i > 0; i--){
            numerator *= i;
      }
      for ( int i = n-r; i > 0; i--){
            denominator *= i;
      }
      for ( int i = r; i > 0; i--){
            denominator *= i;
      }
      return (numerator / denominator);
}
int main(){
      int n = 0, r = 0;
      cout << "n : ";
      cin >> n;
      cout << "r : ";
      cin >> r;
      cout << "C(n, r) : " << C(n, r) << endl;
      return 0;
}
~~~

2.
Write a function permutNumbers that prints all n! many permutations of the numbers 1 to n on std::out.
 
Example: the output for permutNumbers (3) shall be:
123, 132, 213, 231, 312, 321
 
~~~cpp
#include <iostream>
using namespace std;
 
void swap(int *x, int *y){
  int temp = *x;
  *x = *y;
  *y = temp;
}
 
void Permute(int *a, int i, int n){
  if(i == n){
    for (int j = 0; j <= n; j++){
      cout << *(a + j);
    }
    cout << endl;
  }
  else{
    for (int j = i; j <= n; j++){
      swap((a+i), (a+j));
      Permute(a, i+1, n);
      swap((a+i), (a+j));
    }
  }
} 
 
void permutNumbers(int n){
  int a[30];
  for ( int i = 1; i <= n; i++){
    a[i-1] = i;
  }
  Permute(a, 0, n-1);
}
 
int main(){
  permutNumbers(3);
  return 0;
}
~~~

3. Given the following function definition:
~~~cpp
int sum_down(int x)
{
    if (x >= 0)
    {
         x = x - 1;
         int y = x + sum_down(x);
         return y + sum_down(x);
    }
    else
    {
         return 1;
    }
}
~~~
a)What is this smallest integer value of the parameter x, so that the returned value is greater than 1.000.000 ? 
      
     -> x==19  
b)Rewrite the function, so that it is free of recursion. I.e. give an iterative definition on the foundation of a loop-construct. TIP: First transform the recursive definition, so that you have just a single recursive call.
~~~cpp
#include<iostream>
 
int sum_down_iterative(int x)  // change into loop
{
    if (x<0) return 1;
    int sum = 1;
    for (int i = 0; i <= x; i++)      // for loop makes function iterative
       sum = (i – 1) + 2 * sum;
    return sum;
}
int main()
{
    int input;
    std::cout<<"number : ";
    std::cin >>input;
    std::cout << sum_down_iterative(input);
    return 0;
}
~~~
c)Is it OK to switch the type of the parameter x to double? Discuss your decision / give an argumentation.
 
-> I think it is OK to change x into double type. As it can count integernumber, it will not cause a error.
d)Is it OK to switch the type of the parameter x to unsigned int? Discuss your decision / give an argumentation.
 
             -> I think it is NOT OK to change x into unsigned int type.               To get out of the function, it has to be a negative number.               If x stops at 0, we cannot get out from the function. 
 
e)Is it OK to switch the function head to int sum_down(const int x)? Discuss your decision / give an argumentation.
-> I think it is NOT OK to have const in front of the function head int_sum_down.  Putting const in front of head means we will not going to change the value of it.  To be more specific, const means we are going to read value without modifying it.  But in the function 1st line, we are trying to change x i
