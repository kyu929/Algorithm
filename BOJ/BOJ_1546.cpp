#include<iostream>
using namespace std;

int main() {
	int N = 0;
	double max = 0;
	double arr[1001];
	double avg = 0;
	double sum = 0;
	cin >> N;
	for(int i = 0; i < N; i++) {
		cin >> arr[i];
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	for (int i = 0; i < N; i++) {
		sum = sum + (arr[i] / max * 100.0);
	}
	cout << sum << endl;
	avg = sum / N;
	cout << fixed;
	cout.precision(2);
	cout << avg << endl;
}