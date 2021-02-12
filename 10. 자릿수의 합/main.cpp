#include <iostream>
using namespace std;

int digit_sum(int x) {
	int sum = 0;
	while (x > 0) {
		sum += x % 10;
		x = x / 10;
	}
	return sum;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int len, num;
	int max = -1;
	int sum = 0;
	int res = 0;
	cin >> len;

	for (int i = 0; i < len; i++) {
		cin >> num;
		sum = digit_sum(num);
		if (sum > max) {
			max = sum;
			res = num;
		}
		else if (sum == max) {
			if (num > res) {
				res = num;
			}
		}
	}
	cout << res << endl;
	return 0;
}
