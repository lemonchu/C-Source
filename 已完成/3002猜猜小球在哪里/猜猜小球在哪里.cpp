#include<iostream>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<algorithm>
int main(){
	int a,b;
	int tip=1;
	scanf("%d%d",&a,&b);
	for(int i=1;i<=a;i++){
		int x,y;
		scanf("%d%d",&x,&y);
		if(x==tip)tip=y;
		else if(y==tip)tip=x;
	}
	printf("%d",tip);
	return 0;
} 
 