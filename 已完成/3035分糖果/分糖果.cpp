#include<iostream>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<algorithm>
#include<windows.h>
using namespace std;
int main(){
	int a[5];
	for(int i=0;i<=4;i++)scanf("%d",&a[i]);
	for(int i=0;i<=4;i++){
		int last=i-1,next=i+1;
		if(i==0)last=4;
		if(i==4)next=0;
		a[next]+=a[i]/3,a[last]+=a[i]/3,a[i]/=3;
	}
	for(int i=0;i<=4;i++)printf("%d ",a[i]);
}