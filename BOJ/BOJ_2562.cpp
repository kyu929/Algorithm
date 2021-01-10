#include<iostream>
using namespace std;

int main() {
	int a[10];
	int max = 0, cnt = 0;;
	for (int i = 0; i < 9; i++) {
		cin >> a[i];
		if (a[i] > max) {
			max = a[i];
			cnt = i+1;
		}
	}
	cout << max << endl;
	cout << cnt << endl;
	return 0;
}
