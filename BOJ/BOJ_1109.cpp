/*
1 111111
2 4 8 6 2 4 8 6
3 9 7 1 3 9 7 1
5 5 5 5 5 5 5 
6 6666
7 9 3 1
8 4 2 6 8 4 2 6
9 1 9 1
*/
#include<iostream>

int main() {
	int T = 0;
	int a = 0, b = 0;
	int ans = 0;
	scanf("%d", &T);
	int arr2[4] = { 2,4,8,6 };
	int arr3[4] = { 3,9,7,1 };
	int arr4[2] = { 4,6 };
	int arr7[4] = { 7,9,3,1 };
	int arr8[4] = { 8,4,2,6 };
	int arr9[2] = { 9,1 };
	while (T--){
		scanf("%d %d", &a, &b);
		a = a % 10;
		if (a == 1) {
			printf("1\n");
		}
		else if (a == 2) {
			ans = arr2[(b+3) % 4];
			printf("%d\n", ans);
		}
		else if (a == 3) {
			ans = arr3[((b+3) % 4)];
			printf("%d\n", ans);
		}
		else if (a == 4) {
			ans = arr4[(b + 1) % 2];
			printf("%d\n", ans);
		}
		else if (a == 5) {
			printf("5\n");
		}
		else if (a == 6) {
			printf("6\n");
		}
		else if (a == 7) {
			ans = arr7[((b + 3) % 4)];
			printf("%d\n", ans);
		}
		else if (a == 8) {
			ans = arr8[((b + 3) % 4)];
			printf("%d\n", ans);
		}
		else if (a == 9) {
			ans = arr9[(b + 1) % 2];
			printf("%d\n", ans);
		}
		else if (a == 0) {
			printf("10\n");
		}
	}
}