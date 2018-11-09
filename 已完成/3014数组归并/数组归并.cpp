#include<iostream>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int la[2000000];
int main(){
	int a,b,c;
	scanf("%d%d",&a,&b);
	c=a+b;
	for(int i=0;i<a+b;i++)scanf("%d",&la[i]);
	sort(la,la+c);
	int sametest=la[0];
	for(int i=0;i<a+b;i++){
		printf("%d ",la[i]);
	}
}