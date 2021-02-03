/*
1211. [S/W 문제해결 기본] 2일차 - Ladder2
https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV14BgD6AEECFAYh
*/

#include<iostream>

using namespace std;

int main() {

	int TestCase = 10;
	int TestNum = 0;
	int row, col;
	int path_len = 0;
	int flag = 0;
	int res = 0;
	int input;
	int min = 9999;
	int arr[100][102] = { 0, };

	for (int j = 0; j < 100; j++) {
		arr[j][0] = -1;
		arr[j][101] = -1;
	}

	for (int t = 0; t < TestCase; t++) {
		cin >> TestNum;
		for (int i = 0; i < 100; i++) {
			for (int j = 1; j < 101; j++) {
				cin >> input;
				arr[i][j] = input;
			}
		}

		for (int k = 1; k < 101; k++) {
			row = 0;
			col = k;

			if (arr[row][col] == 1) {
				path_len = 0;

				for (int m = 0; m < 100; m++) {
					row++;
					path_len++;

					while (arr[row][col + 1] == 1) {
						flag = 1;
						col += 1;
						path_len++;
					}

					if (flag != 1) {
						while (arr[row][col - 1] == 1) {
							col -= 1;
							path_len++;
						}
					}
					flag = 0;
				}
				if (min >= path_len) {
					min = path_len;
					res = k - 1;
				}
			}
		}
		cout << "#" << TestNum << " " << res << endl;
		min = 9999;
	}
	return 0;
}

/*
자신의 알고리즘 실력이 얼마나 한심한지 알려준 문제이다. 소스코드가 조금만 난잡해도 정리가 안되고
계속 코드가 지저분해진다. 더 꾸준한 노력과 연습이 필요해보인다.
추후 재도전 필요 reference : https://chanhuiseok.github.io/posts/algo-13/ 거의 보고 참고가 아니라 복붙한 느낌 다시 문제 풀어 내껏으로 만들 필요가 있다.
BFS로도 풀이 가능해 
*/
