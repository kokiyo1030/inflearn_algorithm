#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m;
	int pos = 0;
	int sec = 0;
	int total = 0;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		total += a[i];
	}
	cin >> m;
	if (m >= total) {
		cout << -1;
		return 0;
	}

	while (1) {
		if (pos >= n) {
			pos = 0;
		}
		if (a[pos] != 0) {
			a[pos]--;
			sec++;
			if (sec == m) break;
		}
		pos++;
	}

	while (1) {
		pos++;
		if (pos >= n) pos = 0;
		if (a[pos] != 0) break;
	}
	cout << pos + 1;

	return 0;
}
