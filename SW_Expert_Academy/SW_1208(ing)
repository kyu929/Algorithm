/*
1208. [S/W 문제해결 기본] 1일차 - Flatten
https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV139KOaABgCFAYh&categoryId=AV139KOaABgCFAYh&categoryType=CODE
*/
#include<iostream>
#include<vector>

using namespace std;

int row[100] = {}; //가로길이

int main() {
	for (int TestCase = 1; TestCase <= 10; TestCase++) {
		int dump;
		vector<int> max;
		vector<int> min;
		int high = 0, low = 101;

		cin >> dump;

		for (int i = 0; i < 100; i++) {
			cin >> row[i];
		}

		for (int d = 0; d < dump; d++) {

			for (int i = 0; i < 100; i++) {
				if (high < row[i]) {
					high = row[i];
				}
				else if (low > row[i]) {
					low = row[i];
				}
			}


		}

	}
}
