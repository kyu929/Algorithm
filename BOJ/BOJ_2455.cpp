#include<iostream>
#include<vector>
using namespace std;

int find_max(std::vector< vector<int> > arr) {
	int max = 0;
	int people = 0;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 2; j++) {
			if (j == 0) {
				people -= arr[i][j];
			}
			else {
				people += arr[i][j];
			}
		}
		if (people > max) {
			max = people;
		}
	}
	return max;
}


int main() {
	vector< vector<int> > station(5, vector<int>(2));
	int ans = 0;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 2; j++) {
			cin >> station[i][j];
		}
	}
	ans = find_max(station);
	cout << ans << endl;
	return 0;


}