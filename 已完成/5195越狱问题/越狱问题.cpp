#include<cstdio>
#include<cstring>
#include<algorithm>
#define ll long long
using namespace std;
ll qpow(ll x,ll y){
	if(y==0)return 1;
	else if(y==1)return x%100003;
	else if(y%2==0){
		ll s=qpow(x,y/2)%100003;
		return (s*s)%100003;
	}
	else{
		ll s=qpow(x,y/2)%100003;
		return (((s*s)%100003)*x)%100003;
	}
}
int main(){
	ll a,b,all,run;
	scanf("%lld%lld",&a,&b);
	printf("%lld",(qpow(a,b)+100003-(a*qpow(a-1,b-1))%100003)%100003);
    return 0;
}