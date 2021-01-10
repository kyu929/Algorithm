#include<iostream>

int main() {
	int N = 0;
	int check = 0;
	int cnt = 1;
	int num = 0;
	int den = 0;
	scanf("%d", &N);
	while (1) {
		N = N - cnt;
		if (N > 0) {
			cnt++;
		}
		else if (N <= 0) {
			check = N + cnt;
			if (cnt % 2 == 0) {
				den = cnt;
				den = den - check+1;
				num = check;
				printf("%d/%d", num, den);
			}
			else if (cnt % 2 != 0) {
				num = cnt;
				den = check;
				num = num - check+1;
				printf("%d/%d", num, den);
			}
			break;
		}
	}
}