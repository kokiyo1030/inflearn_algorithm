#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	int i, j;
	int tmp;
	cin >> n;
	vector<int> check(n + 1);

	for (i = 2; i <= n; i++) {
		tmp = i;
		j = 2;
		while (1) {
			if (tmp % j == 0) {
				tmp = tmp / j;
				check[j]++;
			}
			else {
				j++;
			}
			if (tmp == 1) break;
		}
	}
	
	cout << n << "! = ";
	for (i = 2; i <= n; i++) {
		if (check[i] != 0) {
			cout << check[i];
		}
	}


	return 0;
}
