/*
1210. [S/W 문제해결 기본] 2일차 - Ladder1 D4
https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV14ABYKADACFAYh&categoryId=AV14ABYKADACFAYh&categoryType=CODE
*/

#include<iostream>

using namespace std;

int arr[102][102] = { { 0, }, };

struct MyLocation {
	int col = 0;
	int row = 0;
};

int main() {
	int TestCase = 10;
	int TestNum = 0;
	MyLocation me;
	MyLocation next;
	int res = 0;

	for (int t = 1; t <= TestCase; t++) {
		cin >> TestNum;
		for (int col = 0; col < 100; col++) {
			for (int row = 0; row < 100; row++) {
				cin >> arr[col][row];

				//find endpoint
				if (arr[col][row] == 2) {
					me.col = col;
					me.row = row;
				}
			}
		}

		for (int i = 99; i >= 1; i--) {
			if (arr[i][me.row + 1] == 1) {
				while (1) {
					me.row++;
					if (arr[i][me.row+1] != 1) {
						break;
					}
				}
			}
			else if (arr[i][me.row - 1] == 1) {
				while (1) {
					me.row--;
					if (arr[i][me.row-1] != 1) {
						break;
					}
				}
			}
		}

		cout << "#" << TestNum << " " << me.row << endl;

	}

	return 0;
}
