#include<iostream>
using namespace std;

int Top_star(int n) {
	int i = 0;
	for (int c = 0; c < n; c++) {
		for (i = 0; i <= c; i++) {
			cout << "*";
		}
		for (int j = 0; j < 2 * n - 2 * i; j++) {
			cout << " ";
		}
		for (i = 0; i <= c; i++) {
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}

int Bottom_star(int n) {
	int i = 0;
	for (int c = 1; c < n; c++) {
		for (i = n; i > c; i--) {
			cout << "*";
		}
		for (int j = -0; j < 2 * c; j++) {
			cout << " ";
		}
		for (i = n; i > c; i--) {
			cout << "*";
		}
		if(c+1 < n) cout << endl;
	}
	return 0;
}

int main() {
	int N = 0;
	cin >> N;
	Top_star(N);
	Bottom_star(N);
	return 0;
	
}