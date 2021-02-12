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

	int n1;
	cin >> n1;
	vector<int> a(n1);

	for (int i = 0; i < n1; i++) {
		cin >> a[i];
	}

	int n2;
	cin >> n2;
	vector<int> b(n2);
	vector<int> c(n1 + n2);

	for (int i = 0; i < n2; i++) {
		cin >> b[i];
	}

	while (p1 < n1 && p2 < n2) {
		if (a[p1] < b[p2]) {
			c[p3++] = a[p1++];
		}
		else {
			c[p3++] = b[p2++];
		}
	}
	while (p1 < n1) c[p3++] = a[p1++];
	while (p2 < n2)	c[p3++] = b[p2++];

	for (int i = 0; i < p3; i++) {
		cout << c[i] << ' ';
	}

	return 0;
}
