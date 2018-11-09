#include<iostream>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<algorithm>
int r,f,s=0;
using namespace std;
int pd(int num[],int tip){
	for(int k=0;k<r;k++)if(num[k]+num[tip]==f&&k!=tip){
		s++;
		return 0;
	}
	return 1;
}
int a[1000];
int main(){
	scanf("%d%d",&r,&f);
	for(int i=0;i<r;i++)scanf("%d",&a[i]);
	for(int i=0;i<r;i++)if(pd(a,i)==0)s++;
	printf("%d",s/2);
	return 0;
}