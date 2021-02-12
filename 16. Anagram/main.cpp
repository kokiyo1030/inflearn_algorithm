#include <iostream>
using namespace std;

char a[60];
char b[60];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	char str1[100];
	char str2[100];

	cin >> str1;
	cin >> str2;

	for (int i = 0; str1[i] != '\0'; i++) {
		if (str1[i] >= 'A' && str1[i] <= 'Z') {
			a[str1[i] - 64]++;
		}
		else {
			a[str1[i] - 70]++;
		}
	}

	for (int i = 0; str2[i] != '\0'; i++) {
		if (str2[i] >= 'A' && str2[i] <= 'Z') {
			b[str2[i] - 64]++;
		}
		else {
			b[str2[i] - 70]++;
		}
	}

	for (int i = 1; i < 52; i++) {
		if (a[i] != b[i]) {
			cout << "NO" << endl;
			return 0;
		}
	}
	cout << "YES" << endl;
	return 0;
}
