#include<iostream>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int fib[1000]; 
int main(){
	int t,i;
	double s=0;
	scanf("%d",&t);
	fib[0]=1,fib[1]=2;
	if(t==1)s=2;
	else if(t==2)s=3.5;
	else for(i=2;i<=t+1;i++){
		fib[i]=fib[i-1]+fib[i-2];
		s=s+(double)fib[i-1]/fib[i-2]*1.0;
	}
	printf("%.2lf",s);
}