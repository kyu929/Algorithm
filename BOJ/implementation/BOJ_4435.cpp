/*
https://www.acmicpc.net/problem/4435
*/
#include<iostream>

using namespace std;

int gandalf[6] = {1, 2, 3, 3, 4, 10};
int sauron[7] = {1, 2, 2, 2, 3, 5, 10};

int main() {
	int T = 0;
	cin >> T;
	for (int t = 1; t <= T; t++){
		int gandalf_troops[6];
		int sauron_troops[7];
		int gandalf_point = 0;
		int sauron_point = 0;

		for (int gi = 0; gi < 6; gi++) {
			cin >> gandalf_troops[gi];
		}
		for (int si = 0; si < 7; si++) {
			cin >> sauron_troops[si];
		}

		for (int i = 0; i < 6; i++) {
			gandalf_point += gandalf[i] * gandalf_troops[i];
		}
		for (int j = 0; j < 7; j++) {
			sauron_point += sauron[j] * sauron_troops[j];
		}

		cout << "Battle" << " " << t << ":" << " ";
		if (gandalf_point > sauron_point) {
			cout << "Good triumphs over Evil" << endl;
		}
		else if (gandalf_point < sauron_point) {
			cout << "Evil eradicates all trace of Good" << endl;
		}
		else {
			cout << "No victor on this battle field" << endl;
		}
	}
}
