#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool desc(int a, int b) { return a > b; }

int main() {
	int N = 0;
	int arr1[51];
	int arr2[51];
	int ans = 0;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &arr1[i]);
	}
	for (int i = 0; i < N; i++) {
		scanf("%d", &arr2[i]);
	}
	sort(arr1, arr1 + N);
	sort(arr2, arr2 + N, desc);
	for (int i = 0; i < N; i++) {
		ans += arr1[i] * arr2[i];
	}
	printf("%d", ans);
		
}