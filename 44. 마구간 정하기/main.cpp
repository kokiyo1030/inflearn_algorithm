#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n;

int Count(int size, int a[]) {
	int cnt = 1;
	int pos = a[0];
	for (int i = 1; i < n; i++) {
		if (a[i] - pos >= size) {
			cnt++;
			pos = a[i];
		}
	}
	return cnt;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int m;
	int left = 1;
	int right, mid;
	int res;
	cin >> n >> m;
	int* a = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a + n);

	right = a[n - 1];
	while (left <= right) {
		mid = (left + right) / 2;
		if (Count(mid, a) >= m) {
			res = mid;
			left = mid + 1;
		}
		else {
			right = mid - 1;
		}
	}
	cout << res;
	delete[] a;

	return 0;
}
