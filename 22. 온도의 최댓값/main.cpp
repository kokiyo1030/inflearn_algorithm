#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int days;
	int checkDays;
	int sum = 0;
	int max = -2100000000;

	cin >> days >> checkDays;
	vector<int> temp(days);

	for (int i = 0; i < days; i++) {
		cin >> temp[i];
	}

	for (int i = 0; i < checkDays; i++) {
		sum += temp[i];
	}
	max = sum;

	for (int i = checkDays; i < days; i++) {
		sum = sum + temp[i] - temp[i - checkDays];
		if (sum > max) {
			max = sum;
		}
	}

	cout << max;

	return 0;
}
