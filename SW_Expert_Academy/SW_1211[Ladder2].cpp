/*
1211. [S/W 문제해결 기본] 2일차 - Ladder2
*/

#include<iostream>

using namespace std;

int arr[102][102] = { 0 };

int main(){
	int tc = 10;
	int tcn = 0;
	int res = 0;
	int count = 0;
	int col_count = 0;
	int min = 9999999;
	for(int t = 0; t < tc; t++){
		cin >> tcn;
		
		res = 0;
		min = 9999999;
		for(int row = 1; row <= 100; row++){
			for(int col = 1; col <= 100; col++){
				cin >> arr[row][col];
			}
		}
		
		for(int i = 1; i <= 100; i++){
			count = 0;
			if(arr[1][i] == 1){
				col_count = i;
				for(int i = 1; i <= 100; i++){
					count++;
					if(arr[i][col_count+1] == 1){
						while(1){
							count++;
							col_count++;
							if(arr[i][col_count] != 1){
								break;
							}
						}
					}
					else if(arr[i][col_count-1] == 1){
						while(1){
							count++;
							col_count--;
							if(arr[i][col_count] != 1){
								break;
							}
						}
					}
				}

			}
			if(min > count){
				min = count;
				res = i;
			}
		}
		cout << res <<endl;
	}
	
	return 0;
}

/*
자신의 알고리즘 실력이 얼마나 한심한지 알려준 문제이다. 소스코드가 조금만 난잡해도 정리가 안되고
계속 코드가 지저분해진다. 더 꾸준한 노력과 연습이 필요해보인다.
*/
