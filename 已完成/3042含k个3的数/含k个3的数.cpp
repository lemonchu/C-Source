#include<iostream>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int main(){
	int r,num,s=0;
	scanf("%d%d",&num,&r);
	while(num!=0){
		int temp=num%10;
		if(temp==3)s++;
		num/=10;
	}
	if(r==s&&num%19==0)printf("yes");
	else printf("no");
    return 0;
}