#include <iostream>
using namespace std;

int reverse(int x) {
	int res = 0;
	while (x > 0) {
		int tmp = x % 10;
		res = res * 10 + tmp;
		x /= 10;
	}
	return res;
}

bool isPrime(int x) {
	bool flag = true;
	if (x == 1)
		return false;
	for (int i = 2; i < x; i++) {
		if (x % i == 0) {
			flag = false;
			break;
		}
	}
	return flag;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	int num;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> num;
		int tmp = reverse(num);
		if (isPrime(tmp)) {
			cout << tmp << ' ';
		}
	}
	return 0;
}
