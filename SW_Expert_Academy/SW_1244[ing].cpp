/*
1244. [S/W 문제해결 응용] 2일차 - 최대 상금
https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV15Khn6AN0CFAYD&categoryId=AV15Khn6AN0CFAYD&categoryType=CODE&problemTitle=2%EC%9D%BC%EC%B0%A8&orderBy=FIRST_REG_DATETIME&selectCodeLang=ALL&select-1=&pageSize=10&pageIndex=1
*/

#include<iostream>
#include<string>

using namespace std;

string a;
int ret, n, T;
void go(int here, int _n) {
    if (_n == 0) {
        ret = max(ret, atoi(a.c_str()));
        return;
    }
    for (int i = here; i < a.size(); i++) {
        for (int j = i + 1; j < a.size(); j++) {
            if (a[i] < a[j]) {
                swap(a[i], a[j]);
                go(i, _n - 1);
                swap(a[i], a[j]);
            }
        }
    }
    if (_n % 2 == 0) ret = max(ret, atoi(a.c_str()));
    else {
        for (int i = 0; i < a.size(); i++) {
            for (int j = i + 1; j < a.size(); j++) {
                swap(a[i], a[j]);
                ret = max(ret, atoi(a.c_str()));
                swap(a[i], a[j]);
            }
        }
    }

    return;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> T;
    for (int t = 1; t <= T; t++) {
        cin >> a >> n;
        ret = 0;
        go(0, n);
        cout << "#" << t << " " << ret << "\n";
    }
    return 0;
}

/*
처음엔 선택정렬처럼 정렬을 주어진 횟수만큼 하는 줄 알았으나

32888과 같은 반례가 있어 완전 탐색으로 다 탐색을 해봐야한다는 것을 알게 되었다.
*/
