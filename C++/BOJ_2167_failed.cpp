#include<iostream>
using namespace std;

int main() {
	
	int arr[1000][1000];
	int col = 0, row = 0;
	int n_i = 0, n_j = 0;
	int n_x = 0, n_y = 0;
	int T = 0;
	cin>> col;

	for (int i = 0; i < col; i++) {
		for (int j = 0; j < row; j++) {
			scanf("%d", &arr[i][j]);
		}
	}
	
	scanf("%d", &T);
	while (T--) {
		scanf("%d %d %d %d", &n_i, &n_j, &n_x, &n_y);
		if (n_i == n_x && n_j == n_y) {
			printf("%d", arr[n_i - 1][n_j - 1]);
		}
	}
}