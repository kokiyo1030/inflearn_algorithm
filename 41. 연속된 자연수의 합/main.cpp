#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int a;
	int b = 1;
	int i;
	int cnt = 0;
	cin >> a;

	int tmp = a;
	a--;
	while (a > 0) {
		b++;
		a = a - b;
		if (a % b == 0) {
			for (i = 1; i < b; i++) {
				cout << (a / b) + i << " + ";
			}
			cout << (a / b) + i << " = " << tmp << endl;
			cnt++;
		}
	}
	cout << cnt;

	return 0;
}
