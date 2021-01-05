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
	string input;
	cin >> input;
	input = input.substr(input.rfind('1') - 55, 56);
	cout << input << endl;

	return 0;
}

/*
반대로 생각하는 법도 기르자 다양하게 생각해보자...
공통점을 찾아서 해결하는 법도 찾아보자...
*/
