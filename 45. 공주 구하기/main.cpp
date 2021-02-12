#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m;
	int pos = 0;
	int bp = 0;
	int cnt = 0;
	cin >> n >> m;
	vector<int> prince(n);
	while (1) {
		if (pos >= n) pos = 0;
		if (prince[pos] == 0) {
			cnt++;
			if (cnt == m) {
				prince[pos] = 1;
				cnt = 0;
				bp++;
			}
		}
		pos++;
		if (bp == n - 1) break;
	}

	for (int i = 0; i < n; i++) {
		if (prince[i] == 0) {
			cout << i + 1;
		}
	}

	return 0;
}
