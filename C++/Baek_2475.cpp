#include<iostream>
#include<math.h>
using namespace std;

int main() {
	int arr[10];
	int sum = 0;
	int ans = 0;

	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
		arr[i] = pow(arr[i], 2);
		sum += arr[i];
	}
	ans = sum % 10;
	cout << ans;
	

}