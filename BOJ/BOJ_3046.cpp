#include<iostream>
using namespace std;

int find_R2(int a, int b) {
	int ans = 0;
	ans = (2 * b) - a;
	return ans;
}


int main() {
	int R1 = 0, S = 0;
	int R2 = 0;
	cin >> R1 >> S;
	R2 = find_R2(R1, S);
	cout << R2 << endl;
	return 0;

}