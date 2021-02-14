#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	stack<char> s;
	char a[31];
	cin >> a;

	for (int i = 0; a[i] != '\0'; i++) {
		if (a[i] == '(') {
			s.push(a[i]);
		}
		else {
			if (s.empty()) {
				cout << "NO";
				return 0;
			}
			s.pop();
		}
	}
	if (s.empty()) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}

	return 0;
}
