#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int student;
	cin >> student;
	vector<int> score(student);
	vector<int> grade(student);

	for (int i = 0; i < student; i++) {
		cin >> score[i];
		grade[i] = 1;
	}

	for (int i = 0; i < student; i++) {
		for (int j = 0; j < student; j++) {
			if (score[j] > score[i])
				grade[i]++;
		}
	}

	for (int i = 0; i < student; i++) {
		cout << grade[i] << ' ';
	}


	return 0;
}
