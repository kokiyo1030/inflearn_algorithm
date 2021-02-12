#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	char id[20];
	int year;
	cin>>id;
	
	if(id[7] == '1' || id[7] == '2') {
		year = 1900+((id[0]-48)*10+(id[1]-48));
		cout<<2021-year+1<<" M"<<endl;
	} else {
		year = 2000 + ((id[0]-48)*10+(id[1]-48));
		cout<<2021-year+1<<" W"<<endl;
	}
	return 0;
}
//#include<stdio.h>
//int main(){
//	char a[20];
//	int year, age;
//	scanf("%s", &a);
//	if(a[7]=='1' || a[7]=='2') year=1900+((a[0]-48)*10+(a[1]-48));
//	else year=2000+((a[0]-48)*10+(a[1]-48));
//	age=2019-year+1;
//	printf("%d ", age);
//	if(a[7]=='1' || a[7]=='3') printf("M\n");
//	else printf("W\n");
//	return 0;
//}

