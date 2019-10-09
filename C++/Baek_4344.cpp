#include<iostream>
using namespace std;

int main() {
	int C = 0;
	int N = 0;
	double sum = 0;
	double avg = 0;
	double count = 0;
	double total_avg = 0;
	int arr[1000] = {};
	cin >> C;
	while (C--) {
		cin >> N;
		for(int i = 0; i < N; i++) {
			cin >> arr[i];
			sum += arr[i];
		}
		avg = sum / N;
		for (int j = 0; j < N; j++) {
			if (arr[j] > avg) {
				count++;
			}
		}
		total_avg = count * 100 / N;
		cout << fixed;
		cout.precision(3);

		cout << double(total_avg) <<"%"<< endl;
		sum = 0;
		avg = 0;
		count = 0;
		total_avg = 0;

	}
}