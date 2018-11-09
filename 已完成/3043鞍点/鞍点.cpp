#include<iostream>
#include<cmath>
#include<cstdio> 
#include<algorithm>
using namespace std;
int main(){
	int n,h=0;
	scanf("%d",&n);
	int s[100][100];
	for(int i=0;i<=n-1;i++){
		for(int j=0;j<=n-1;j++)scanf("%d",&s[i][j]);
	}
	int hmax,hm;
	for(int i=0;i<=n-1;i++){
		hm=0;
		for(int j=0;j<=n-1;j++){
			if(s[i][j]>s[i][hm])hm=j;
		}
		for(int j=0;j<=n-1;j++){
			if(s[i][j]==s[i][hm]){
				for(int k=0;k<=n-1;k++){
					if(s[k][j]<s[i][j])break;
					else if(k==n-1){
						printf("%d %d %d\n",i+1,j+1,s[i][j]);
						h=1;
					}
				}
			}
		}
	}
	if(h==0)printf("no found");
}