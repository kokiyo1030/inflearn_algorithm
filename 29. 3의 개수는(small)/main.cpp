#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	int cnt = 0;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		int tmp = i;
		while (tmp > 0) {
			int digit = tmp % 10;
			if (digit == 3) cnt++;
			tmp /= 10;
		}
	}

	cout << cnt;

	return 0;
}
