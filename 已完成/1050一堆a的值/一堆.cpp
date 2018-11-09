#include<iostream>
#include<cmath>
#include<cstdio>
#include<cstring>
using namespace std;
int add(int a,int b){
	int sum=1;
	for(int i=1;i<=a;i++)sum=sum*10;
	sum=sum/9;
	sum=sum*b;
	return sum;
} 
int main(){;
	int x,y,s=0;
	scanf("%d%d",&x,&y);
	for(int k=1;k<=y;k++)s=s+add(k,x);
	printf("%d",s);
	return 0;
}