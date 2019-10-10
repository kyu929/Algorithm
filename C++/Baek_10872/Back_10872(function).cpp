#include<iostream>
using namespace std;

int factorial(int n) {
	int result = 1;
	if (n == 1) return 1;
	for (int i = 1; i <= n; i++) {
		result = result * i;
	}
	return result;
}

int main() {
	int num = 0;
	int result = 0;
	cin >> num;
	cout << factorial(num) << endl;
	return 0;
}

