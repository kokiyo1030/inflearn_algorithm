#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int num;
	int cnt = 1;
	int max = 0;
	cin >> num;
	vector<int> numbers(num);

	for (int i = 0; i < num; i++) {
		cin >> numbers[i];
	}

	for (int i = 0; i < num - 1; i++) {
		if (numbers[i] <= numbers[i + 1]) {
			cnt++;
		}
		else {
			cnt = 1;
		}
		if (cnt > max) {
			max = cnt;
		}
	}

	cout << max;

	return 0;
}
