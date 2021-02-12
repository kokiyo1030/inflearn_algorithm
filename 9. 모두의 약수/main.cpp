#include <iostream>
using namespace std;

int cnt[50001];
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int num;
	cin >> num;

	for (int i = 1; i <= num; i++) {
		for (int j = i; j <= num; j = j + i) {
			cnt[j]++;
		}
	}
	for (int i = 1; i <= num; i++) {
		cout << cnt[i] << ' ';
	}
	
	return 0;
}
