#include<iostream>

int main() {
	int T = 0;
	int n = 0;
	int arr[11];
	scanf("%d", &T);
	while (T--) {
		scanf("%d", &n);
		arr[1] = 1; arr[2] = 2; arr[3] = 4;
		for (int i = 4; i <= n; i++) {
			arr[i] = arr[i - 1] + arr[i - 2] + arr[i - 3];
		}
		printf("%d\n", arr[n]);
	}
}