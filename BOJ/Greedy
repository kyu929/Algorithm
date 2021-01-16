/*
BOJ_1744 수 묶기
https://www.acmicpc.net/problem/1744
*/
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int arr[10001];

int main() {
	
	int N = 0;
	int zeroCnt = 0;
	int oneCnt = 0;
	int res = 0;
	cin >> N;

	vector<int> pos;
	vector<int> neg;

	for (int i = 0; i < N; i++) {
		cin >> arr[i];

		if (arr[i] > 1) {
			pos.push_back(arr[i]);
		}
		else if (arr[i] < 0) {
			neg.push_back(-arr[i]);
		}
		else if (arr[i] == 0) {
			zeroCnt++;
		}
		else if (arr[i] == 1) {
			oneCnt++;
		}
	}

	if (pos.size() % 2 == 1) {
		pos.push_back(1);
	}
	if (neg.size() % 2 == 1) {
		if (zeroCnt == 0) {
			neg.push_back(-1);
		}
		else {
			neg.push_back(0);
		}
	}

	sort(pos.begin(), pos.end());
	sort(neg.begin(), neg.end());

	res += oneCnt;

	for (int i = 0; i < pos.size(); i += 2) {
		res += pos[i] * pos[i + 1];
	}
	for (int j = 0; j < neg.size(); j += 2) {
		res += neg[j] * neg[j + 1];
	}

	cout << res;

	return 0;
}


/* failed code
#include<iostream>
#include<vector>

using namespace std;

int arr[10001];

void quick_sort(int* arr, int start, int end) {
	
	if (start >= end) {
		return;
	}

	int pivot = start;
	int i = pivot + 1;
	int j = end;
	int temp;

	while (i <= j) {
		while (i <= end && arr[i] >= arr[pivot]) {
			i++;
		}
		while (j > start && arr[j] <= arr[pivot]) {
			j--;
		}
		if (i > j) {

			temp = arr[j];
			arr[j] = arr[pivot];
			arr[pivot] = temp;
		}
		else {

			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
	}

	quick_sort(arr, start, j - 1);
	quick_sort(arr, j + 1, end);
}

int main() {

	int N = 0;
	int res = 0;
	int zero = 0;
	vector<int> pos;
	vector<int> neg;
	cin >> N;
	
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	quick_sort(arr, 0, N-1);

	for (int j = 0; j < N; j++) {
		if (arr[j] > 0) {
			pos.push_back(arr[j]);
		}
		else if (arr[j] < 0) {
			neg.push_back(arr[j]);
		}
		else {
			zero++;
		}
	}


	if (pos.size() % 2 == 1) {
		res += pos[pos.size() - 1];
		for (int pj = 0; pj < (pos.size() - 1) / 2; pj+=2) {
			res += (pos[pj] * pos[pj + 1]);
		}
	}
	else {
		for (int pj = 0; pj < (pos.size() - 1) / 2; pj+=2) {
			res += (pos[pj] * pos[pj + 1]);
		}
	}

	if (neg.size() % 2 == 1) {
		if (zero == 0) {
			res += neg[neg.size() - 1];
		}
		for (int nj = 0; nj < (neg.size() - 1) / 2; nj+=2) {
			cout << "hi" << endl;
			res += (neg[nj] * neg[nj + 1]);

		}
	}
	else {
		for (int nj = 0; nj < (neg.size() - 1) / 2; nj += 2) {
			res += (neg[nj] * neg[nj + 1]);
		}
	}

	cout << res << endl;

	return 0;

}
*/
