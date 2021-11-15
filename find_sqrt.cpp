#include <iostream>
using namespace std;

int main() {
	int square;
	cout << "type a square number:";
	cin >> square;
	
	for (int n=1; n<=square;n=n+1){
		if (n*n==square) {
		cout << "the square root is:" << n;
	}}
	return 0;
}
