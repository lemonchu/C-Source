#include<iostream>
#include<cstring>
#include<cmath>
#include<cstdio>
#include<algorithm>
using namespace std;
long long lp(int x){
	long long re=1;
	for(int i=1;i<=x;i++)re=re*3;
	return re;
}
int main(){
	long long r,tot;
	while(scanf("%lld",&r)){
		if(r==0)break;
		for(int i=0;i<=20;i++){
			if(lp(i)>=r){
				tot=i;
				break;
			}
		}
		printf("%lld\n",tot);
	}
	return 0;
}