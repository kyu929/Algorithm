#include<iostream>
using namespace std;

int main() {
	int N = 0;
	cin >> N;
	for (int i = 1; i < N+1; i++) {
		for (int j = N; j > i; j--) {
			cout << " ";
		}
		for (int j = 0; j < 2 * i - 1; j++) {
			cout << "*";
		}
		cout << endl;
	}
	for (int i = N-1; i > 0; i--) {
		for (int j = i; j < N; j++) {
			cout << " ";
		}
		for (int j = 2 * i - 1; j > 0; j--) {
			cout << "*";
		}
		if(i != 1) cout << endl;
	}
}

