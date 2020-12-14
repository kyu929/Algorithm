#2020-12-14

#include<iostream>

using namespace std;

int main() {
	int n = 0;
	int num = 0;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		int result = 0;
		for (int j = 0; j < 10; j++) {
			cin >> num;
			if (num % 2 != 0) {
				result += num;
			}
		}
		cout << "#" << i << " " << result << endl;
	}

	return 0;
}