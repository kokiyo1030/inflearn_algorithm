#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	int cnt2 = 0;
	int cnt5 = 0;
	int sum = 1;
	cin >> n;

	for (int i = 2; i <= n; i++) {
		int tmp = i;
		int j = 2;
		while (1) {
			if (tmp % j == 0) {
				if (j == 2) cnt2++;
				else if (j == 5) cnt5++;
				tmp /= j;
			}
			else {
				j++;
			}
			if (tmp == 1) break;
		}
	}

	if (cnt2 < cnt5) {
		cout << cnt2;
	}
	else {
		cout << cnt5;
	}

	return 0;
}
