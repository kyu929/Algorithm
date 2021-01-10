#include<iostream>
#include<string>
using namespace std;

int main() {
	int T = 0;
	int A = 0, B = 0;
	char C;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >>A>>C>>B;
		cout << A + B << endl;
	}
}	