#include<iostream>
#include<cstring>
using namespace std;

bool workchecker(char *arr) {
	bool checker = false;
	int size = strlen(arr);
	for (int i = 0; i < 26; i++) {
		for (int j = 0; j < size; j++) {
			if (arr[j] == i + 97) {
				checker = true;
			}
			else if (arr[j] != i + 97 && checker = false) {
				checker = false;
			}
			else if (arr[j] == i + 97 && checker == false) {
				return false;
			}
		}
	}
	return true;
	
}


int main() {
	char arr[101];
	int T = 0;
	int size = 0;
	scanf("%d", &T);
	scanf("%s", &arr);

	cout << workchecker(arr) << endl;
	
}
