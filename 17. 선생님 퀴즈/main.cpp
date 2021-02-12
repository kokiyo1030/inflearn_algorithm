#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int student;
	int num, answer;

	cin >> student;

	for (int i = 0; i < student; i++) {
		cin >> num >> answer;
		if (num * (num + 1) / 2 == answer) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
	return 0;
}
