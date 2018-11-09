#include<iostream>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int acm(int x,int y){
	if(x==0)return y+1;
	else if(x>0&&y==0)return acm(x-1,1);
	else if(x>0&&y>0)return acm(x-1,acm(x,y-1)); 
}
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%d",acm(a,b));
	return 0;
}