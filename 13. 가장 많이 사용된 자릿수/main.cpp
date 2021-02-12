#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	char num[101];
	int result = 0;
	int temp = 0;
	int cnt[10] = { 0, };
	cin >> num;

	for (int i = 0; num[i] != '\0'; i++) {
		int digit = num[i] - '0' - 0;
		cnt[digit]++;
	}

	for (int i = 9; i >= 0; i--) {
		if (cnt[i] > temp) {
			temp = cnt[i];
			result = i;
		}
	}
	cout << result;
	return 0;
}
