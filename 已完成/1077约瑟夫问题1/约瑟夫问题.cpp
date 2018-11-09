#include<cstdio>
#include<cmath>
#include<cstring>
#include<algorithm>
using namespace std;
int man[500];
int r,s=0;
int print(){
	for(int i=1;i<=r;i++){
		printf("%d ",man[i]);
	}
	printf("\b\n");
	return 0;
}
int main(){
	int tip=1,count=1;
	scanf("%d",&r);
	for(int i=1;i<=r;i++)man[i]=1;
	while(s!=r-1){
		if(count!=3&&man[tip]==1){
			tip++;
			if(tip==r+1)tip=1;
			count++;
		}
		else if(man[tip]==0){
			tip++;
			if(tip==r+1)tip=1;
		}
		else if(count==3&&man[tip]==1){
			man[tip]=0;
			count=1;
			s++;
			tip++;
			if(tip==r+1)tip=1;
		}
	}
	for(int i=1;i<=r;i++){
		if(man[i]==1){
			printf("%d",i);
			return 0;
		}
	}
	return 0;
}