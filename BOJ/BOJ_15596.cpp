#include<iostream>
#include<vector>
using namespace std;

long long sum(std::vector<int> &a);


int main() {
	int n, var;
	vector<int> v;
	cin >> n;
	for (int j = 0; j < n; j++) {
		cin >> var;
		v.push_back(var);
	}
	cout << sum(v) << endl;;
	
}

long long sum(std::vector<int> &a) {
	long long ans = 0;
	int h = a.size();
	for (int i = 0; i < h; i++) 
	{
		ans += a[i];
	}
	return ans;

}


//Baek_15596 answer
/*
#include<vector>
long long sum(std::vector<int> &a) {
	long long ans = 0;
	int h = a.size();
	for (int i = 0; i < h; i++)
	{
		ans += a[i];
	}
	return ans;

}*/