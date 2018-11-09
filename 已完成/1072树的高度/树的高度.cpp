#include<iostream>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
long long tree[100000];
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++)scanf("%lld",&tree[i]);
	for(int i=1;i<=m;i++){
		int x,y;
		long long z;
		scanf("%d",&x);
		if(x==1){
			scanf("%d %lld",&y,&z);
			tree[y-1]=tree[y-1]+z;
		}
		else{
			scanf("%d",&y);
			printf("%lld\n",tree[y-1]);
		}
	}
	return 0;
}