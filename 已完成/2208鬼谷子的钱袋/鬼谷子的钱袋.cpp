#include<cstdio>
#include<cmath>
#include<cstring>
#include<algorithm>
#define ll long long
using namespace std;
int main(){
	ll k;
	int tip;
	scanf("%lld",&k);
	k+=1;
	for(tip=0;pow(2.0,tip)<k;tip++);
	printf("%d",tip);
	return 0;
}