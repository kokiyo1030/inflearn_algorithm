#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int i, j;
	int cacheSize, n, pos, a;
	cin >> cacheSize >> n;
	vector<int> cache(cacheSize);

	for (i = 0; i < n; i++) {
		cin >> a;
		pos = -1;
		for (j = 0; j < cacheSize; j++) {
			if (cache[j] == a) {
				pos = j;
			}
		}
		if (pos == -1) {
			for (j = cacheSize - 1; j >= 1; j--) {
				cache[j] = cache[j - 1];
			}
		}
		else {
			for (j = pos; j >= 1; j--) {
				cache[j] = cache[j - 1];
			}
		}
		cache[0] = a;
	}

	for (i = 0; i < cacheSize; i++) {
		cout << cache[i] << ' ';
	}

	return 0;
}
