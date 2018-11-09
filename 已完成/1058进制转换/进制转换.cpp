#include<cstdio>
#include<cmath>
#include<cstring>
#include<algorithm>
using namespace std;
int a,tip=0;char s[10000];
int main(){
	scanf("%d",&a);
	if(a==0){
		printf("0");
		return 0;
	}
	while(a!=0){
		s[tip]=a%2+48;a/=2;tip++;
	}
	for(int i=strlen(s)-1;i>=0;i--)printf("%c",s[i]); 
	return 0;
} 