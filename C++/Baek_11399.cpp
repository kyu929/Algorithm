#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	vector <int> v;
	int num = 0;
	int n = 0;
	int sum = 0;

	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> n;
		v.push_back(n);
	}
	sort(v.begin(), v.end());
	for (int j = 0; j < num; j++) {
		if (j != 0) v[j] += v[j - 1];
		sum += v[j];
	}

	
	cout << sum;
}