#include <iostream>
using namespace std;

int main() {
	int n1, n2;
	int sum = 0;
	
	cin>>n1>>n2;
	for(int i=n1; i<n2; i++) {
		cout<<i<<'+';
		sum+=i;
	}
	cout<<n2<<'=';
	sum+=n2;
	cout<<sum;
	return 0;
}
