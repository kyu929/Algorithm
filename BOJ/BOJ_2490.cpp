#include <iostream>
using namespace std;

int main() {
	int N;
	int cnt = 0;
	int arr[4];
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 4; j ++){
			cin >> arr[j];
			if(arr[j] == 0){
				cnt ++;
			}
		}
		if(cnt == 1){
			cout << "A" <<endl;
		}
		else if(cnt == 2){
			cout << "B" <<endl;
		}
		else if(cnt == 3){
			cout << "C" <<endl;
		}
		else if(cnt == 4){
			cout << "D" <<endl;
		}
		else{
			cout << "E" <<endl;
		}
		cnt = 0;
	}
}
