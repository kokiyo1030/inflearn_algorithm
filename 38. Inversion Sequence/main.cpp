#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	int pos;
	cin >> n;
	vector<int> is(n + 1);
	vector<int> os(n + 1);

	for (int i = 1; i <= n; i++) {
		cin >> is[i];
	}

	for (int i = n; i >= 1; i--) {
		pos = i;
		for (int j = 1; j <= is[i]; j++) {
			os[pos] = os[pos + 1];
			pos++;
		}
		os[pos] = i;
	}

	for (int i = 1; i <= n; i++) {
		cout << os[i] << ' ';
	}

	return 0;
}
