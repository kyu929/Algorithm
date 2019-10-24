#include<iostream>
using namespace std;

int gcd(int a, int b) {
	while (b != 0) {
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}

int lcm(int a, int b) {
	return a * b / gcd(a, b);
}

int main() {
	int T = 0;
	int A, B;
	cin >> T;
	while (T--) {
		cin >> A >> B;
		cout<< lcm(A, B)<<endl;
	}
}