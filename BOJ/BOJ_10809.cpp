#include<iostream>
#include<string>
using namespace std;

int main() {
	char arr[27] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
	int arr1[27] = { };
	std::fill_n(arr1, 27, -1);

	string s;

	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		
		for (int j = 0; j < 26; j++) {
			
			if (s[i] == arr[j]) {
				if (arr1[j] == -1){
					arr1[j] = i;
					break;
				}
				break;
			}
		}
	}
	for (int k = 0; k < 26; k++) {
		cout << arr1[k] << ' ';
	}


}