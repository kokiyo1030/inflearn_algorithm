#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	int pos = 0;
	int sum = 0;
	cin >> n;
	vector<vector<int>> a(n, vector<int> (n));
	vector<int> b(n);
	vector<int> c(n);

	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> c[i];
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			a[j][i] = b[i];
		}
	}

	for (int i = n - 1; i >= 0; i--) {
		for (int j = n - 1; j >= 0; j--) {
			if (a[i][j] > c[pos]) {
				a[i][j] = c[pos];
			}
		}
		pos++;
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			sum += a[i][j];
		}
	}
	cout << sum;

	return 0;
}
