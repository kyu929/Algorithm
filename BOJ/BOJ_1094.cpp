#include<iostream>
using namespace std;

int main() {
	int X = 0;
	int stick = 64;
	int stick_sum = 0;
	int cnt = 0;
	cin >> X;
	while (X != stick_sum) {
		if (X == 64) {
			cnt = 1;
			break;
		}
		stick = stick / 2;
		stick_sum += stick;
		cnt++;
		if (X < stick_sum){
			stick_sum -= stick;
			cnt--;
		}
	}
	cout << cnt << endl;
	return 0;
}
////////////////////////이진법으로도 푸는 방법이 있다.