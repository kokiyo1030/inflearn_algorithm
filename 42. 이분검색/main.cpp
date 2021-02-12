#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, key;
	int left = 0;
	int mid;
	cin >> n >> key;
	int right = n - 1;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a.begin(), a.end());

	while (left <= right) {
		mid = (left + right) / 2;
		if (a[mid] == key) {
			cout << mid + 1;
			break;
		}
		else if (a[mid] > key) {
			right = mid - 1;
		}
		else {
			left = mid + 1;
		}
	}

	return 0;
}
