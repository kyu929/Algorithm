#include<iostream>
using namespace std;

int binomial_coefficient(int a, int b) {
	int ans;
	int n1 = 1;
	int	n2 = 1;
	for (int i = a; i > a-b; i--) {
		n1 = n1 * i;
	}
	for (int j = b; j > 0; j--) {
		n2 = n2 * j;
	}
	ans = n1 / n2;
	return ans;
}

int main() {
	int N, K;
	int n1 = 1, n2 = 1;
	scanf("%d %d", &N, &K);
	printf("%d", binomial_coefficient(N, K));

}