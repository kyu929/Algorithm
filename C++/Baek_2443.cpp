#include<iostream>
using namespace std;

int main() {
	int n = 0;
	int cnt = 0;
	cin >> n;
	for (int i = n; i >= 1; i--) {
		
		for (int k=0; k < cnt; k++) {
			cout << " ";
		}
		for (int j = 2*i-1; j > 0; j--) {
			cout << "*";
		}
		cout << endl;
		cnt++;
	}
}