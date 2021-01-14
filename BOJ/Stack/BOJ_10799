/*
BOJ_10799 쇠막대기
https://www.acmicpc.net/problem/10799
*/

#include<iostream>
#include<string>
#include<stack>

using namespace std;

int main() {
	string s;
	stack<char> st;
	int res = 0;

	cin >> s;
	
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '(') {
			st.push('(');
		}
		else {
			st.pop();

			if (s[i - 1] == '(') {
				res += st.size();
			}
			else {
				res++;
			}
		}
	}

	cout << res;

	return 0;
}
