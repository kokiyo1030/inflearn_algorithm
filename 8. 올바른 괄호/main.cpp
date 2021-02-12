#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	char a[30];
	int cnt = 0;
	cin >> a;

	for (int i = 0; a[i] != '\0'; i++) {
		if (a[i] == '(') {
			cnt++;
		}
		else {
			cnt--;
		}
		if (cnt < 0) {
			break; 
		}
	}

	if (cnt == 0)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}
