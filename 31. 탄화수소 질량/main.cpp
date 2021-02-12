#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	char ch[10];
	int c = 0;
	int h = 0;
	int i;
	int pos;
	cin >> ch;

	if (ch[1] == 'H') {
		c = 1;
		pos = 1;
	}
	else {
		for (i = 1; ch[i] != 'H'; i++) {
			c = c * 10 + (ch[i] - '0');
		}
		pos = i;
	}
	if (ch[pos + 1] == '\0') h = 1;
	else {
		for (int i = pos + 1; ch[i] != '\0'; i++) {
			h = h * 10 + (ch[i] - '0');
		}
	}

	cout << c * 12 + h;

	return 0;
}
