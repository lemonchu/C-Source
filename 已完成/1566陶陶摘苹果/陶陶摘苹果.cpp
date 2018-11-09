#include<cstdio>
using namespace std;
int main(){
	int a[10];
	for(int i=0;i<=9;i++)scanf("%d",&a[i]);
	int range,s=0;
	scanf("%d",&range);
	for(int i=0;i<=9;i++)if(range+30>=a[i])s++;
	printf("%d",s);
	return 0;
}