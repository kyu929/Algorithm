#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int arr[100];
	int a;
	for(int i = 1; i < 29; i++){
		cin >> a;
		arr[a] = 1;
	}
	for(int j = 1; j < 31; j++){
		if(arr[j] != 1){
			cout<<j<<endl;
		}
	}
}
