#include <iostrem>

int sum_down(int x){
  if (x >= 0){
    return (x - 1) + 2*sum_down(x-1);
  }
  else{
    return 1;
  }
}

int sum(int n){
  int sum = 1;
  for (int j = -1; j < n; j++){
    sum = j + 2*sum;
  }
  return sum;
}

int main(){
  int x;
  std::cout << "Enter the integer ";
  std::cin >> x;
  std::cout << sum_down(x) << std::endl;
  std::cout << sum(x) << std::endl;
}
