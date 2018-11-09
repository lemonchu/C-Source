#include<cstdio>
#include<cstring>
#include<algorithm>
#define ll long long
using namespace std;
ll qpow(ll a,ll b,ll c){
	if(b==1)return a;
	if(b%2==0){
		int t=qpow(a,b/2,c);
		return (t%c)*(t%c)%c;
	}else{
		int t=qpow(a,b/2,c);
		t=(t%c)*(t%c)%c;
		t=(t%c)*(a%c)%c;
		return t;
	}
}
int main(){
	ll x,y,z;
	scanf("%lld%lld%lld",&x,&y,&z);
	printf("%lld",qpow(x,y,z));
    return 0;
}