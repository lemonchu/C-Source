#include<iostream>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int main(){
	int a[3];
	for(int i=0;i<=2;i++)scanf("%d",&a[i]);
	sort(a,a+3);
	printf("%d",a[2]);
	return 0; 
}