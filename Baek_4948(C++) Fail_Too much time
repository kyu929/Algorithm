#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n = 0;
	int cnt = 0;
	while(1){
		scanf("%d", &n);
		if(n == 0) break;
		if(n==1){
			cnt = 1;
		}
		for(int i = 2*n; i > n; i--){
			for(int j = sqrt(i); j > 1; j--){
				if(i%j==0){
					break;
				}
				else if(sqrt(i) <j){
					cnt++;
				}
			}
		}
		printf("%d\n", cnt);
		cnt = 0;
	}
}
