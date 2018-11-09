#include<iostream>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int main(){
	double a,b,x,y,l;
	scanf("%lf%lf%lf%lf%lf",&a,&b,&x,&y,&l);
	double s=sqrt((x-a)*(x-a)+(y-b)*(y-b));
	if(l<=s)printf("yes");
	else printf("no");
}