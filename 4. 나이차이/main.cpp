#include <iostream>
using namespace std;

int main() {
	// freopen("input.txt", "rt", stdin);
	int len, max, min;
	cin>>len;
	int arr[len];
	for(int i=0;i<len;i++) {
		cin>>arr[i];
	}
	max = arr[0];
	min = arr[0];
	for (int i=1; i<len; i++) {
		if(arr[i] > max) {
			max = arr[i];
			continue;
		}
		if(arr[i] < min) {
			min = arr[i];
		}
	}
	cout<<max-min;
	return 0;
}
