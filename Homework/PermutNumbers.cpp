#include <iostrem>

void swap (int &x, int &y){
  int temp;
  temp = x;
  x = y;
  y = temp;
}

void permute(int a[], int i, int n){
  if ( i == n){
    for (int j = 0; j <= n; j++)
    {
      std::cout << a[j];
    }
    std::cout << std:: endl;
  }
  else
  {
    for (int j = i; j <= n; j++)
    {
      swap(a[i], a[j]);
      permute(a, i+1, n);
      swap(a[i], a[j]);
    }
  }
void permutNumbers(int n){
  int a[30];
  for (int i = 1; i <= n; i++){
    a[i-1] = i;
  }
  permute(a, 0, n-1);
}
void main(){
  permutNumbers(3);
}
