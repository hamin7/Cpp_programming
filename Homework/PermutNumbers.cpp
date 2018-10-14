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
