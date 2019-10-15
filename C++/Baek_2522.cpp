#include<iostream>
using namespace std;

int main() {
	int N = 0;
	int reverse = 0;
	cin >> N;
	for (int i = 1; i < N; i++) {
		
		for (int j = N - i; j > 0; j--) {
			cout << " ";
		}
		for (int k = 0; k < i; k++) {
			cout << "*";
		}
		cout << endl;
		
	}
	for (int i = 1; i <= N; i++) {
		cout << "*";
	}
	cout << endl;
	for (int i = 1; i < N; i++) {
		for (int k = 0; k < i; k++) {
			cout << " ";
		}
		for (int j = N - i; j > 0; j--) {
			cout << "*";
		}
		cout << endl;

	}

}



////////////////reverse
/*
#include <stdio.h>

int abs(int t)
{
	return ( t<0 ) ? -t : t;
}

int main(){
	int a=0;
	scanf("%d",&a);
	for(int j=1;j<=2*a-1;j++){
		for(int k=0;k<abs(a-j);k++){
			printf(" ");
		}
		for(int i=1;i<=a-abs(a-j);i++){
			printf("*");
		}
		printf("\n");
	}
}*/