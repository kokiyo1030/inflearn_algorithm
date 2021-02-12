#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int num;
	int total = 0;
	int cnt = 1;
	int digit = 9;
	int result = 0;

	cin >> num;
	while (total + digit < num) {
		result += cnt * digit;
		total += digit;
		cnt++;
		digit *= 10;
	}
	result += (num - total) * cnt;
	cout << result;
	return 0;
}
