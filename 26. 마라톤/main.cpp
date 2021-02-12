#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int player;
	cin >> player;
	vector<int> skill(player);
	vector<int> grade(player);

	for (int i = 0; i < player; i++) {
		cin >> skill[i];
	}

	for (int i = player - 1; i >= 0; i--) {
		for (int j = i; j >= 0; j--) {
			if (skill[j] >= skill[i]) {
				grade[i]++;
			}
		}
	}

	for (int i = 0; i < player; i++) {
		cout << grade[i] << ' ';
	}
	
	//int player;
	//int cnt = 0;
	//cin >> player;
	//vector<int> skill(player);

	//for (int i = 0; i < player; i++) {
	//	cin >> skill[i];
	//}
	//cout << "1 ";
	//for (int i = 1; i < player; i++) {
	//	cnt = 0;
	//	for (int j = i; j >= 0; j--) {
	//		if (skill[j] >= skill[i]) {
	//			cnt++;
	//		}
	//	}
	//	cout << cnt << ' ';
	//}

	return 0;
}
