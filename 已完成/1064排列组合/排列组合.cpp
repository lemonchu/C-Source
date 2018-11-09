#include<iostream>
#include<cstring>
#include<cmath>
#include<cstdio>
#include<algorithm>
#include<ctime>
using namespace std;
int r,m;
int list[12]={0};
bool numext[12]={0};
int print();
int searchp(int tip){
	for(int i=list[tip-1];i<=r;i++){
		if(tip>m){
			print();
			return 0;
		}else if(numext[i]==0){
			numext[i]=1;
			list[tip]=i;
			searchp(tip+1);
			numext[i]=0;
			list[tip]=0;
		}
	}
}
int main(){
	scanf("%d%d",&r,&m);
	for(int k=1;k<=r;k++){
		list[1]=k;
		numext[k]=1;
		searchp(2);
		numext[k]=0;
	}
}
int print(){
	for(int i=1;i<=m;i++){
		printf("%d ",list[i]);
	}
	printf("\n");
	return 0;
} 