#include<iostream>
#include<cstring>
using namespace std;

bool wordchecker(char *arr) {
	bool alphabet[26] = { false };
	int size = strlen(arr);
	for (int i = 0; i < size; i++) {
		if (alphabet[arr[i] - 'a']) {
			return false;
		}
		else {
			char tmp = arr[i];
			alphabet[arr[i] - 'a'] = true;
			while (1) {
				if (tmp != arr[++i]) {
					i--;
					break;
				}
			}
		}
	}
	return true;
	
}


int main() {
	char arr[101];
	int T = 0;
	int cnt = 0;
	int size = 0;
	scanf("%d", &T);
	while (T--) {
		scanf("%s", &arr);
		if (wordchecker(arr)) {
			cnt++;
		}
	}
	printf("%d", cnt);
	return 0;
	
}