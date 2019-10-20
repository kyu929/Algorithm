#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main() {
	char ch;
	int cnt = 0;
	vector<vector<char>> chessboard;
	for (int col = 0; col < 8; col++) {

		chessboard.push_back(vector<char>());
		for (int row = 0; row < 8; row++) {
			cin >> ch;
			chessboard.at(col).push_back(ch);
		}
	}

	for (int col = 0; col < 8; col++) {
		if (col % 2 == 0) {
			for (int row = 0; row < 8; row++) {
				if (chessboard[col][row] == 'F'&& row % 2 == 0) {
					cnt++;
				}
			}
		}
		else {
			for (int row = 0; row < 8; row++) {
				if (chessboard[col][row] == 'F' && row % 2 == 1) {
					cnt++;
				}
			}
		}
	}

	cout << cnt;
}