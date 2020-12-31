/*
1204. [S/W 문제해결 기본] 1일차 - 최빈수 구하기
https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV13zo1KAAACFAYh
*/

#include<iostream>
#include<vector>
 
using namespace std;
 
int TestCase = 0;
 
int main(){
    cin >> TestCase;
    while(TestCase--){
        int TestNum = 0;
        int max = 0;
        int ans = 0;
        vector<int> V(101, 0);
         
        cin >> TestNum;
        for(int i = 0; i < 1000; i++){
            int score;
            cin >> score;
            V[score]++;
        }
        for(int i = 0; i <= 100; i++){
            if(max <= V[i]){
                ans = i;
                max = V[i];
            }
        }
        cout << "#" << TestNum << " " << ans <<endl;
    }
     
    return 0;
}

/*
각 학생이 받을 수 있는 점수를 vector로 카운트 할 수 있는 index를 만든 후 각 학생이 받은 점수를 카운트하여 넣어주면 된다.
(간단히 설명하기가 어렵다 더 정확한 용어와 쉽게 설명할 수 있도록 고민해보자).
*/
