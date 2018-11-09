#include<iostream>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int main(){
	int t;
	scanf("%d",&t);
	if(t%4!=0||(t%400!=0&&t%100==0))printf("no");
	else printf("yes");
	return 0;
}