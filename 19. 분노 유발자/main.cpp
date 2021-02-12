#include <iostream>
using namespace std;

int height[100];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int student;
	int maxheight;
	int cnt = 0;

	cin >> student;
	for (int i = 0; i < student; i++) {
		cin >> height[i];
	}

	maxheight = height[student-1];
	for (int i = student - 1; i >= 0; i--) {
		if (height[i] > maxheight) {
			maxheight = height[i];
			cnt++;
		}
	}

	cout << cnt;
	return 0;
}
