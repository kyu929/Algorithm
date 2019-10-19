#include<iostream>
#include<string>
using namespace std;

int main() {
	int arr[2][30] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'  };
	string str;
	cin >> str;
	for (int i = 0; i < str.length(); i++) {
		for (int j = 0; j < 26; j++) {
			if (str[i] == arr[0][j]) {
				arr[1][j] += 1;
			}
		}
	}
	for (int j = 0; j < 26; j++) {
		cout << arr[1][j] << " ";
	}
	return 0;
}