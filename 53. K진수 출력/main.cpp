#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, k;
	char str[20] = "0123456789ABCDEF";
	stack<int> s;
	cin >> n >> k;

	while (n > 0) {
		s.push(n % k);
		n = n / k;
	}
	while (!s.empty()) {
		cout << str[s.top()];
		s.pop();
	}

	return 0;
}
