/*SW_Expert_Academy 1206. [S/W 문제해결 기분] 1일차 - View
*/
#include<iostream>
#include<vector>
using namespace std;
 
int TestCase = 10;
 
int main(){
    for(int i = 1; i <= TestCase; i++){
        int T;
        int ans = 0;
         
        cin >> T;
         
        vector<int> V(T);
         
        for(int j = 0; j < T; j++){
            cin >> V[j];
        }
        for(int k = 2; k <= T-2; k++){
            int max = 0;
            if(V[k-2] > max){
                max = V[k-2];
            }
            if(V[k-1] > max){
                max = V[k-1];
            }
            if(V[k+1] > max){
                max = V[k+1];
            }
            if(V[k+2] > max){
                max = V[k+2];
            }
             
            if(V[k] > max){
                ans += (V[k] - max);
            }
        }
         
        cout << "#" << i << " " << ans << endl;
         
         
    }
     
    return 0;
}

/*
조금만 문제를 자세히 읽어봤더라면 좀 더 쉽게 풀 수 있었을 것 같은 문제이다.
[제약 사항]에서 맨 왼쪽 두 칸과 맨 오른쪽 두칸에는 건물이 지어지지 않는다. 라는 제약 사항을 참고하면 쉽게 풀 수 있는 문제이다.
배열로 생각하게 되면 맨 왼쪽 두 칸과 맨 오른쪽 두칸에는 건물이 지어지지 않으므로 index의 범위를 벗어나는 경우를 생각하지 않아도 된다. 건물은 2번째와 마지막 - 2 번째까지 지어지므로 index의 
range의 경우 크게 고민할 필요가 없다.
*/
