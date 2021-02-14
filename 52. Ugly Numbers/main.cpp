#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	int p2 = 1;
	int p3 = 1;
	int p5 = 1;
	int min = 0;
	cin >> n;
	vector<int> a(n + 1);

	a[1] = 1;
	for (int i = 2; i <= n; i++) {
		if (a[p2] * 2 < a[p3] * 3)
			min = a[p2] * 2;
		else
			min = a[p3] * 3;
		if (a[p5] * 5 < min)
			min = a[p5] * 5;
		if (a[p2] * 2 == min)
			p2++;
		if (a[p3] * 3 == min)
			p3++;
		if (a[p5] * 5 == min)
			p5++;
		a[i] = min;
	}
	cout << a[n];

	return 0;
}
