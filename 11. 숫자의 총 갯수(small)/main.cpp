#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int num;
	int flag;
	int cnt = 0;
	cin >> num;

	for (int i = 1; i <= num; i++) {
		flag = i;
		while (flag > 0) {
			flag = flag / 10;
			cnt++;
		}
	}
	cout << cnt;
	return 0;
}
