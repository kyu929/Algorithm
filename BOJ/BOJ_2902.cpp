#include<iostream>
#include<string>
using namespace std;

int main() {
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		if(i == 0) cout << s[0];
		if (s[i] == '-') {
			cout << s[i + 1];
		}
	}
	return 0;
}