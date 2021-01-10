#include<iostream>
#include<stdlib.h>
using namespace std;



int main() {
	int N = 0;
	cin >> N;
	for (int i = 0; i < N ; i++) {
		for (int k = 0; k < i; k++) {
			cout << ' ';
		}
		for (int j = 0; j < 2*(N-i) -1; j++) {
			cout << '*';
		}
		cout << endl;
	}
	for (int i = 2; i < N+1; i++) {
		for (int k = 0; k < N - i; k++) {
			cout << ' ';
		}
		for (int j = 0; j < 2 * i - 1; j++) {
			cout << '*';
		}
		
		cout << endl;
	}
}