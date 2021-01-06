/*
SW Expert Academy 1240
https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV15FZuqAL4CFAYD
*/

#include<iostream>
#include<string>
#include<vector>

using namespace std;

string num[10] = { "0001101", "0011001", "0010011", "0111101", "0100011", "0110001", "0101111", "0111011", "0110111", "0001011" };

int main() {
	int TestCase = 0;
	int n, m;
	cin >> TestCase;
	for (int i = 1; i <= TestCase; i++) {
		int odd = 0, even = 0, ans = 0;
		string input;
		vector<string> s;
		cin >> n >> m;
		
		for (int j = 0; j < n; j++) {
			cin >> input;
			if (input.find('1') == string::npos) {
				continue;
			}
			input = input.substr(input.rfind('1') - 55, 56);
			s.push_back(input);
		}

		for (int k = 0; k < 8; k++) {
			for (int h = 0; h < 10; h++) {
				if (num[h] == s[0].substr(7 * k, 7)) {
					if ((k + 1) % 2 == 0) {
						even += h;
					}
					else {
						odd += h;
					}
					ans += h;
					break;
				}
			}
		}

		cout << "#" << i << " ";
		if (((odd * 3) + even) % 10 != 0) {
			cout << 0 << endl;
		}
		else {
			cout << ans << endl;
		}
	}
	return 0;
}

/*
반대로 생각하는 법도 기르자 다양하게 생각해보자...
공통점을 찾아서 해결하는 법도 찾아보자...
이번 문제는 너무 참고를 많이 하여 푼거 같다... 거의 남이 푼 문제 배낀듯.
https://eunchanee.tistory.com/148?category=1152452
위 블로그를 참고하여 풀었다. 새로 알게된 부분은 있어서 그나마 다행이였다라고 생각한다.
string::npos
http://www.cplusplus.com/reference/string/string/npos/
*/
