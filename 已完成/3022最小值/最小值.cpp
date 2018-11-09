#include<iostream>
#include<cmath>
#include<cstdio>
#include<cstring>
int r,t;
int num[10000];
int main(){
	scanf("%d%d",&r,&t);
	scanf("%d",&num[0]);
	int minnum=num[0];
	for(int i=1;i<r;i++){
		int input;
		scanf("%d",&input);
		if(input<minnum)minnum=input;
	}
	for(int i=1;i<=t;i++){
		int input;
		scanf("%d",&input);
		if(input==1){
			int y;
			scanf("%d",&y);
			if(y<minnum)minnum=y;
		}else printf("%d\n",minnum);
	}
	return 0;
}