#include<iostream>
#include<string>
using namespace std;

string reverse(string str) {
	string reverse;
	int n = str.length();
	for (int i = 0; i < n; i++) {
		reverse += str.substr(n - i-1, 1);
	}
	return reverse;
}


int main() {
	string s1;
	string s2;
	int n1 = 0, n2 = 0;
	cin >> s1 >> s2;
	s1 = reverse(s1);
	s2 = reverse(s2);
	n1 = atoi(s1.c_str());
	n2 = atoi(s2.c_str());
	if (n1 > n2) {
		cout << n1;
	}
	else cout << n2;

}

/*
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
	string s1;
	string s2;
	int n1 = 0, n2 = 0;
	cin >> s1 >> s2;
	reverse(s1.begin(), s1.end());
	reverse(s2.begin(), s2.end());
	n1 = atoi(s1.c_str());
	n2 = atoi(s2.c_str());
	if (n1 > n2) {
		cout << n1;
	}
	else cout << n2;

}
*/