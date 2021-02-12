#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int a[10];
	int b[10];
	int scoreA = 0;
	int scoreB = 0;
	char flag;
	char winner;
	int drawCnt = 0;

	for (int i = 0; i < 10; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < 10; i++) {
		cin >> b[i];
	}

	for (int i = 0; i < 10; i++) {
		if (a[i] == b[i]) {
			scoreA++;
			scoreB++;
			drawCnt++;
		}
		else if (a[i] > b[i]) {
			scoreA += 3;
			flag = 'a';
		}
		else {
			scoreB += 3;
			flag = 'b';
		}
	}

	if (scoreA > scoreB) {
		winner = 'A';
	}
	else if (scoreB > scoreA) {
		winner = 'B';
	}
	else if (scoreA == scoreB) {
		if (drawCnt == 10) {
			winner = 'D';
		}
		else {
			if (flag == 'a') {
				winner = 'A';
			}
			else {
				winner = 'B';
			}
		}
	}

	cout << scoreA << ' ' << scoreB << endl;
	cout << winner;

	return 0;
}
