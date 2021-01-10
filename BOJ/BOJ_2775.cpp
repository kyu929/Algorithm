#include<iostream>

int main() {
	int floor = 0, num = 0;
	int T = 0;
	int arr[15][14] = { { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14 },
	{ 1 },{ 1 },{ 1 },{ 1 },{ 1 },{ 1 },{ 1 },{ 1 },{ 1 },{ 1 },{ 1 },{ 1 },{ 1 }, { 1 }};
	scanf("%d", &T);
	while (T--) {
		scanf("%d %d", &floor, &num);
		if (floor == 0 || num == 1) {
			printf("%d\n", arr[floor][num-1]);
		}
		else {
			for (int i = 1; i <= floor; i++) {
				for (int j = 1; j < num; j++) {
					arr[i][j] = arr[i - 1][j] + arr[i][j - 1];
				}
			}
			printf("%d\n", arr[floor][num-1]);
		}
	}
	
	return 0;
}