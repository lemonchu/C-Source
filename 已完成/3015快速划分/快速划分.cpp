#include<iostream>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int a[1000000],b[1000000],c[1000000]; 
int totb=0,totc=0;
int main(){
	int r;
	scanf("%d",&r);
	for(int i=0;i<r;i++)scanf("%d",&a[i]);
	int test=a[0];
	for(int i=1;i<r;i++){
		if(a[i]<=test){
			b[totb]=a[i];
			totb++;
		}else{
			c[totc]=a[i];
			totc++;
		}
	}
	for(int i=0;i<totb;i++)printf("%d ",b[i]);
	printf("%d ",test);
	for(int i=0;i<totc;i++)printf("%d ",c[i]);
	return 0;
}