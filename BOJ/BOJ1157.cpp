#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;

int main() {
	char str[1000001];
	int alphabet[26] = { 0 };
	int size = 0;
	int max = 0;
	int cnt = 0;
	int ans = 0;
	scanf("%s", str);
	size = strlen(str);
	for (int i = 0; i < size; i++) {
		if (str[i] >= 'A' && str[i] <= 'Z') {
			alphabet[str[i] - 'A'] += 1;
		}
		else if (str[i] >= 'a' && str[i] <= 'z') {
			alphabet[str[i] - 'a'] += 1;
		}
	}
	for (int j = 0; j <= 25; j++) {
		if (alphabet[j] > max) {
			max = alphabet[j];
		}
	}
	for (int k = 0; k <= 25; k++) {
		if (alphabet[k] == max) {
			cnt++;
			ans = k;
		}
	}
	if (cnt >= 2) {
		printf("?");
	}
	else if (cnt < 2) {
		printf("%c", ans + 65);
	}
	return 0;
		
}



/* ÃâÃ³ Baekjoon 	djm03178´Ô ÄÚµå https://www.acmicpc.net/source/8755813
  #include <cstdio>
using namespace std;

char buf[1000010];
int cnt[130];

int main()
{
	fread(buf, 1, sizeof(buf), stdin);
	for (char *p = buf; *p; p++)
		cnt[*p]++;
	int i;
	for (i = 'A'; i <= 'Z'; i++)
		cnt[i] += cnt[i + 'a' - 'A'];
	int m = 0;
	for (i = 'A'; i <= 'Z'; i++)
		if (cnt[i] >= cnt[m])
			m = i;
	for (i = 'A'; i <= 'Z'; i++)
		if (cnt[i] == cnt[m] && i != m)
		{
			puts("?");
			return 0;
		}
	putchar(m);
}*/