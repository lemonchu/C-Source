#include<iostream>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int sortnum[21]={0},num=0,range;
bool numest[21]={0};
int prime(int x){
	for(int i=2;i<=sqrt(x)+1;i++)if(x%i==0)return 0;
	return 1;
}
int print(){
	num++;
	for(int i=1;i<=range;i++)printf("%d ",sortnum[i]);
	printf("\n");
}
int searchp(int tip){
	if(tip>range&&prime(1+sortnum[range]))print();
	else for(int i=2;i<=range;i++){
		if(prime(sortnum[tip-1]+i)==1&&numest[i]==0){
			sortnum[tip]=i;
			numest[i]=1;
			searchp(tip+1);
			numest[i]=0;
		}
	}
}
int main(){
	scanf("%d",&range);
	sortnum[1]=1;
	numest[1]=1;
	searchp(2);
	if(num==0&&range!=1)printf("No Answer");
	else if(range==1)printf("1");
	return 0;
}