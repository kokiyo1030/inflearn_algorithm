#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	char a[100];
	int sum = 0, cnt = 0;
	cin >> a;
	for (int i = 0; a[i] != '\0'; i++) {
		if (a[i] >= '0' && a[i] <= '9') {
			sum = sum * 10 + (a[i] - 48);
		}
	}
	for (int i = 1; i <= sum; i++) {
		if (sum % i == 0) {
			cnt++;
		}
	}
	cout << sum << endl << cnt;
	return 0;
}
