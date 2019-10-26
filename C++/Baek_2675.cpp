
#include<iostream>
#include<string>
using namespace std;

int main() {
	string s;
	int T = 0;
	int N = 0;
	cin >> T;
	while (T--) {
		cin >> N;
		cin >> s;
		for (int i = 0; i < s.size(); i++) {
			for (int j = 0; j < N; j++) {
				cout << s[i];
			}
		}
		cout << endl;
	}
	return 0;
}
/*    scanf와 char문자열을 이용한 코드

#include<cstdio>
int t, n, i, j;
char d[22];
int main() {
	scanf("%d", &t);
	while (t--) {
		scanf("%d %s", &n, d);
		i = 0;
		while (d[i]) {
			for (j = 0; j < n; j++) {
				printf("%c", d[i]);
			}
			i++;
		}
		printf("\n");
	}
}
*/