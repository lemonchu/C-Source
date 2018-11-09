#include<iostream>
#include<cmath>
#include<cstdio>
#include<cstring>
using namespace std;
int main(){;
	for(int num=100;num<=999;num++){
	    int a=(num-(num%100))/100;
	    int b=(num-a*100-num%10)/10;
	    int c=num%10;
	    if(a*a*a+b*b*b+c*c*c==num)printf("%d\n",num);
	}
	return 0;
}