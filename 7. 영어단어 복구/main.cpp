#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	char word[100];
	char word2[100];
	int cnt = 0;

	gets(word);

	for (int i = 0; word[i] != '\0'; i++) {
		if (word[i] != ' ') {
			if (word[i] >= 'A' && word[i] <= 'Z') {
				word2[cnt++] = word[i] + ('a' - 'A');
			}
			else if (word[i] >= 'a' && word[i] <= 'z') {
				word2[cnt++] = word[i];
			}
		}
	}
	word2[cnt] = '\0';
	cout << word2;


	return 0;
}

//#include<stdio.h>
//using namespace std;
//int main(){
//	//freopen("input.txt", "rt", stdin);
//	char a[101], b[101];
//	int i, p=0;
//	gets(a);
//	for(i=0; a[i]!='\0'; i++){
//		if(a[i]!=' '){
//			if(a[i]>=65 && a[i]<=90){
//				b[p++]=a[i]+32;
//			}
//			else b[p++]=a[i];
//		}
//	}
//	b[p]='\0';
//	printf("%s\n", b);	
//	return 0;
//}
//	
