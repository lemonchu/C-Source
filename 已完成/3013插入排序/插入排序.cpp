#include<iostream>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
long long sortnum[1000];
long long sorted[1000];
int main(){
	int range;
	scanf("%d",&range);
	for(int i=0;i<range;i++)scanf("%lld",&sortnum[i]);
	for(int i=0;i<range;i++){
		for(int j=0;j<range;j++)sorted[j]=sortnum[j];
		sort(sorted,sorted+(i+1));
		for(int j=0;j<i+1;j++)printf("%lld ",sorted[j]);
		for(int j=i+1;j<range;j++)printf("%lld ",sortnum[j]);
		printf("\n");
	}
}