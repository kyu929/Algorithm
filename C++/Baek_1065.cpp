#include<iostream>
using namespace std;
int cnt = 0;

int chk(int n) {
	int n_1, n_2, n_3 = 0;
	for (int i = 1; i <= n; i++) {
		if (i < 100) {
			cnt++;
			continue;
		}
		n_1 = i % 10;
		n_2 = (i/10)%10;
		n_3 = i/100;
		if ((n_3 - n_2) == (n_2 - n_1)) {
			cnt++;
		}

	}

	return cnt;
}


int main() {
	int N = 0;
	int k = 0;
	cin >> N;
	k = chk(N);
	cout << k << endl;
	return 0;

}
