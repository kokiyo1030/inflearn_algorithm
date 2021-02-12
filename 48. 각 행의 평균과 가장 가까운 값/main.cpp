#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int sum;
	int avg;
	int res;
	int gap;

	int a[9][9] = { 0, };
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cin >> a[i][j];
		}
	}

	for (int i = 0; i < 9; i++) {
		sum = 0;
		avg = 0.0;
		gap = 2100000;
		for (int j = 0; j < 9; j++) {
			sum += a[i][j];
		}
		avg = (sum / 9.0) + 0.5;
		cout << avg << ' ';
		for (int j = 0; j < 9; j++) {
			if (abs(a[i][j] - avg) < gap) {
				res = a[i][j];
				gap = abs(a[i][j] - avg);
			}
			else if (abs(a[i][j] - avg) == gap) {
				if (res < a[i][j]) {
					res = a[i][j];
				}
			}
		}
		cout << res << endl;
	}

	return 0;
}
