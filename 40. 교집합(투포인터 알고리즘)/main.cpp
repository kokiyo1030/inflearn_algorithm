#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int p1 = 0;
	int p2 = 0;
	int p3 = 0;

	int n, m;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a.begin(), a.end());

	cin >> m;
	vector<int> b(m);
	vector<int> c(n+m);
	for (int i = 0; i < m; i++) {
		cin >> b[i];
	}
	sort(b.begin(), b.end());

	while (p1 < n && p2 < m) {
		if (a[p1] == b[p2]) {
			c[p3++] = a[p1++];
			p2++;
		}
		else if (a[p1] < b[p2]) {
			p1++;
		}
		else {
			p2++;
		}
	}
	
	for (int i = 0; c[i] != 0; i++) {
		cout << c[i] << ' ';
	}

	return 0;
}
