#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int h, w;
	int sum = 0;
	int max = 0;
	cin >> h >> w;
	vector<vector<int>> a(h, vector<int>(w));
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			cin >> a[i][j];
		}
	}
	int h1, w1;
	int cnt1 = 0;
	int cnt2 = 0;
	cin >> h1 >> w1;

	for (int i = 0; i < h - h1 + 1; i++) {
		for (int j = 0; j < w - w1 + 1; j++) {
			sum = 0;
			for (int k = i; k < i + h1; k++) {
				for (int l = j; l < j + w1; l++) {
					sum += a[k][l];
					}
				}
			if (sum > max) {
				max = sum;
			}
		}
	}
	cout << max;

	return 0;
}
