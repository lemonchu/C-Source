#include<iostream>
#include<cmath>
#include<cstdio>
#include<cstring>
using namespace std;
char maya[1000][11];
char tran[1000][11];
char com[11];
int main(){;
	int a,b;
	scanf("%d%d",&a,&b);
	for(int i=0;i<a;i++){
		scanf("%s%s",maya[i],tran[i]);
	}
	for(int i=1;i<=b;i++){
		scanf("%s",&com);
		for(int j=0;j<a;j++){
			if(strcmp(com,maya[j])==0){
				printf("%s\n",tran[j]);
				break;
			}
			if(j==a-1)printf("error\n");
		}
	}
	return 0;
}