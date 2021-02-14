#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int h, w;
	int n, m;
	int tmp = 0;
	int max = 0;
	cin >> h >> w;
	vector<vector<int>> a(h + 2, vector<int>(w + 2));
	vector<vector<int>> dy(h + 2, vector<int>(w + 2));
	for (int i = 1; i <= h; i++) {
		for (int j = 1; j <= w; j++) {
			cin >> a[i][j];
			dy[i][j] = dy[i - 1][j] + dy[i][j - 1] - dy[i - 1][j - 1] + a[i][j];
		}
	}

	cin >> n >> m;
	for (int i = n; i <= h; i++) {
		for (int j = m; j <= w; j++) {
			tmp = dy[i][j] - dy[i - n][j] - dy[i][j - m] + dy[i - n][j - m];
			if (tmp > max)
				max = tmp;
		}
	}
	cout << max;

	return 0;
}
