#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	int idx;
	int tmp;
	cin >> n;
	vector<int> a(n);

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	for (int i = 0; i < n - 1; i++) {
		idx = i;
		for (int j = i + 1; j < n; j++) {
			if (a[j] < a[idx])
				idx = j;
		}
		tmp = a[idx];
		a[idx] = a[i];
		a[i] = tmp;
	}

	for (int i = 0; i < n; i++) {
		cout << a[i] << ' ';
	}

	return 0;
}
