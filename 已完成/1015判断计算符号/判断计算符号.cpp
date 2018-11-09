#include<iostream>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int main(){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a+b==c)printf("+");
	else if(a-b==c)printf("-");
	else if(a*b==c)printf("*");
	else if(a/b==c)printf("/");
	else printf("E");
}