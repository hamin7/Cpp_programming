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
