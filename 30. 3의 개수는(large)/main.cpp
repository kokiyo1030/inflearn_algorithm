#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int left = 1;
	int right = 1;
	int cur;
	int k = 1;
	int res = 0;
	int n;

	cin >> n;
	while (left != 0) {
		left = n / (k * 10);
		cur = (n / k) % 10;
		right = n % k;

		if (cur > 3) {
			res = res + ((left + 1) * k);
		}
		else if (cur < 3) {
			res = res + (left * k);
		}
		else {
			res = res + ((left * k) + (right + 1));
		}

		k *= 10;
	}

	cout << res;

	return 0;
}
