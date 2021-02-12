#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int num, flag;
	int count = 0;
	cin >> num;
	
	if (num == 2) {
		count = 1;
	}
	
	for (int i = 2; i < num; i++) {
		flag = 1;
		for (int j = 2; j*j <= i; j++) {
			if (i % j == 0) {
				flag = 0;
				break;
			}
		}
		if (flag == 1) {
			count++;
		}
	}
	cout << count;
}
