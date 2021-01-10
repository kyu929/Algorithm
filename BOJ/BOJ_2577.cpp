#include<iostream>
using namespace std;

int main() {
	int a, b, c;
	int result = 0;
	int ans[1001] = {};
	cin >> a >> b >> c;
	result = a * b * c;
	while (result != 0) {
		ans[result % 10] += 1;
		result = result / 10;
	}
	for (int i = 0; i <= 9; i++) {
		cout << ans[i] << endl;
	}
}

https://blockdmask.tistory.com/82 풀이과정 참고
