/*
1215. [S/W 문제해결 기본] 3일차 - 회문1
https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV14QpAaAAwCFAYi
*/

#include<iostream>

using namespace std;

char lp[8][8];

int main() {
	for (int T = 1; T <= 10; T++) {
		int len, ans = 0;
		cin >> len;
		for (int col = 0; col < 8; col++) {
			for (int row = 0; row < 8; row++) {
				cin >> lp[col][row];
			}
		}

		for (int i = 0; i < 8; i++) {
			for (int j = 0; j <= 8 - len; j++) {
				bool row_flag = true;

				for (int k = 0; k < len / 2; k++) {
					if (lp[i][j + k] != lp[i][j + len - k - 1]) {
						row_flag = false;
					}
				}
				if (row_flag) {
					ans++;
				}
			}
		}

		for (int i = 0; i < 8; i++) {
			for (int j = 0; j <= 8 - len; j++) {
				bool row_flag = true;

				for (int k = 0; k < len / 2; k++) {
					if (lp[j + k][i] != lp[j + len - k - 1][i]) {
						row_flag = false;
					}
				}
				if (row_flag) {
					ans++;
				}
			}
		}
		cout << "#" << T << " " << ans << endl;
	}
	return 0;
}

/*
이번 문제는 너무 구현을 어렵게 하려하여 돌아 갔던 문제이다.
일단 구현을 차근차근한 뒤에 더 좋은 코드를 생각해 보는것도 좋은것 같다.
미리 틀을 짜놓고 생각하자.
이 문제 같은 경우는 8x8에서 회문을 찾는 것이였는데 핵심은 회문의 길이가 있으므로 배열의 길이를 벗어나지 않게 그 길이만큼 빼서 반복문을 구현하는 것이 핵심이다.
*/
