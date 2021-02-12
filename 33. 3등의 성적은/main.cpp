#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	int idx;
	int cnt = 0;
	cin >> n;
	vector<int> score(n);

	for (int i = 0; i < n; i++) {
		cin >> score[i];
	}

	for (int i = 0; i < n - 1; i++) {
		idx = i;
		for (int j = i + 1; j < n; j++) {
			if (score[j] > score[idx])
				idx = j;
		}
		int tmp = score[i];
		score[i] = score[idx];
		score[idx] = tmp;
	}

	for (int i = 0; i < n; i++) {
		if (score[i] != score[i + 1]) {
			cnt++;
		}
		if (cnt == 3) {
			cout << score[i];
			break;
		}
	}

	return 0;
}
