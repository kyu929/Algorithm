/*
1208. [S/W 문제해결 기본] 1일차 - Flatten
https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV139KOaABgCFAYh&categoryId=AV139KOaABgCFAYh&categoryType=CODE
*/
#include<iostream>
#include<vector>

using namespace std;

int box[101]; //가로길이

int main() {
	for (int TestCase = 1; TestCase <= 10; TestCase++) {
		int dump;
		int high = 0, low = 100;
		int high_value = 0, low_value = 0;
		cin >> dump;

		for (int i = 0; i < 100; i++) {
			cin >> box[i];
		}
		for (int d = 0; d <= dump; d++) {
			high = 0, low = 0;
			high_value = 0, low_value = 101;
			for (int i = 0; i < 100; i++) {
				if (high_value < box[i]) {
					high = i;
					high_value = box[i];
				}
				if (low_value > box[i]) {
					low = i;
					low_value = box[i];
				}
			}
			if ((high_value - low_value) == 1 || (high_value - low_value) == 0) {
				break;
			}
			if (d == dump) break;
			box[high]--;
			box[low]++;

		}
		cout << "#" << TestCase << ' ' << box[high] - box[low] << "\n";

	}

	return 0;
}
