#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int second;
	int max;
	int cur;
	int succession = 0;
	int cnt = 0;

	cin >> second >> max;

	for (int i = 0; i < second; i++) {
		cin >> cur;
		if (cur > max) {
			cnt++;
		}
		else {
			cnt = 0;
		}
		if (cnt > succession) {
			succession = cnt;
		}
	}
	if (succession == 0) {
		succession--;
	}
	cout << succession;
	return 0;
}
