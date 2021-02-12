#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n;
int a[1001];

int Count(int size) {
	int cnt = 1;
	int sum = 0;
	for (int i = 0; i < n; i++) {
		if (sum + a[i] > size) {
			cnt++;
			sum = a[i];
		}
		else {
			sum = sum + a[i];
		}
	}
	return cnt;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int m;
	int left = 1;
	int right = 0;
	int mid;
	int res;
	int max = -2100000000;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		right = right + a[i];
		if (a[i] > max) {
			max = a[i];
		}
	}

	while (left <= right) {
		mid = (left + right) / 2;
		if (mid >= max && Count(mid) <= m) {
			res = mid;
			right = mid - 1;
		}
		else {
			left = mid + 1;
		}
	}
	cout << res;

	return 0;
}
