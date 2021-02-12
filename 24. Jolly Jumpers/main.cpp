#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int num;
	int gap;
	string result;
	cin >> num;
	vector<int> numbers(num);
	vector<int> check(num - 1);

	for (int i = 0; i < num; i++) {
		cin >> numbers[i];
	}

	for (int i = 0; i < num - 1; i++) {
		gap = abs(numbers[i] - numbers[i + 1]);
		check[gap - 1] = 1;
	}

	for (int i = 0; i < num - 1; i++) {
		if (check[i] == 0) {
			result = "NO";
			break;
		}
		else {
			result = "YES";
		}
	}

	cout << result;

	return 0;
}
