#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int a[100];
	int b[100];
	int num;
	cin >> num;

	for (int i = 0; i < num; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < num; i++) {
		cin >> b[i];
	}

	for (int i = 0; i < num; i++) {
		if (a[i] == b[i]) {
			cout << "D";
		}
		else if (a[i] == 1 && b[i] == 3) {
			cout << "A";
		}
		else if (a[i] == 2 && b[i] == 1) {
			cout << "A";
		}
		else if (a[i] == 3 && b[i] == 2) {
			cout << "A";
		}
		else {
			cout << "B";
		}
	}

	return 0;
}
