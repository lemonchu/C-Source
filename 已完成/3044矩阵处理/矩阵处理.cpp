#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main(){
	int a,b;
	int s[100][100];
	int o[100][100];
	scanf("%d%d",&a,&b);
	for(int i=0;i<=a-1;i++){
		for(int j=0;j<=b-1;j++)scanf("%d",&s[i][j]);
	}
	for(int i=1;i<=a-2;i++){
		for(int j=1;j<=b-2;j++){
			if(((s[i-1][j]+s[i][j-1]+s[i+1][j]+s[i][j+1]+s[i][j]))%5>=3)o[i][j]=(s[i-1][j]+s[i][j-1]+s[i+1][j]+s[i][j+1]+s[i][j])/5+1;
			if((s[i-1][j]+s[i][j-1]+s[i+1][j]+s[i][j+1]+s[i][j])%5<=2)o[i][j]=(s[i-1][j]+s[i][j-1]+s[i+1][j]+s[i][j+1]+s[i][j])/5;
		}
	}
	for(int i=0;i<=b-1;i++){
		o[0][i]=s[0][i];
		o[a-1][i]=s[a-1][i];
	}
	for(int i=1;i<=a-2;i++){
		o[i][0]=s[i][0];
		o[i][b-1]=s[i][b-1];
	}
	for(int i=0;i<=a-1;i++){
		for(int j=0;j<=b-1;j++)printf("%d ",o[i][j]);
		cout<<endl;
	}
}