//SW Expert Academy 1945   reference : 은유와비유.

#include<iostream>
#include<vector>

using namespace std;

int main() {
	vector<int> vdevide = { 2, 3, 5, 7, 11 };

	int T = 0;
	int input = 0;

	cin >> T;
	for (int testcase = 1; testcase <= T; testcase++) {
		cin >> input;
		cout << "#" << testcase << " ";
		for (int i = 0; i < (int)vdevide.size(); i++) {
			int count = 0;

			for (;;) {
				if (input % vdevide[i] == 0) {
					input /= vdevide[i];
					count++;
					continue;
				}
				else {
					cout << count << " ";
					break;
				}
			}

		}
		cout << endl;
	}

	return 0;
}