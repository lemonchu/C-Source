#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main(){ 
	int d[1000],a,b,i,j;
	scanf("%d%d",&a,&b);
	for(i=0;i<=a-1;i++){
		d[i]=0;
	}
	for(i=1;i<=b;i++){
		for(j=0;j<=a-1;j++){
			if((j+1)%i==0){
				if(d[j]==0)d[j]=1;
				else if(d[j]==1)d[j]=0;
			}
		}
	}
	for(i=0;i<=a-1;i++){
		if(d[i]==1)printf("%d ",i+1);
	}
}