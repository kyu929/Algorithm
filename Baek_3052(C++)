#include <iostream>
using namespace std;

int main() {
	int A[100];
	int B[45] = {0};
	int cnt = 0;
	for(int i = 0; i < 10; i++){
		cin >> A[i];
		B[A[i]%42] =+ 1;
	}
	for(int j = 0; j < 42; j++){
		 if(B[j] == 1){
		 	cnt++;
		 }
	}
	cout << cnt <<endl;
}
