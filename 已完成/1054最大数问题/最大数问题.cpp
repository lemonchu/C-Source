#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<algorithm>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	int max=n;
    while(scanf("%d",&n)){
    	if(n==-1)break;
    	if(n>max)max=n;
    }
    printf("%d",max);
    return 0;
}