#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//int a[52][52];
int dx[4] = { -1, 0, 1, 0 };
int dy[4] = { 0, 1, 0, -1 };

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, i, j, k;
	int cnt = 0;
	cin >> n;
	vector<vector<int>> a(n + 2, vector<int>(n + 2));
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			cin >> a[i][j];
		}
	}

	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			int flag = 0;
			for (k = 0; k < 4; k++) {
				if (a[i][j] <= a[i + dx[k]][j + dy[k]]) {
					flag = 1;
					break;
				}
			}
			if (flag == 0) {
				cnt++;
			}
		}
	}

	cout << cnt;

	return 0;
}
