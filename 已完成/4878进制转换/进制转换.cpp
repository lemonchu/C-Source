#include<iostream>
#include<cstdio>
using namespace std; 
#define ll long long  
ll f[110000]; 
int main() 
{ 
    ll i=0,j,n,m,x; 
    scanf("%lld%lld",&n,&m); 
    if(n==0) 
    { 
        cout<<"0"; 
        return 0; 
    } 
    while(n) 
    { 
        f[i]=n%m; 
        i++; 
        n/=m; 
    } 
    for(j=i-1;j>=0;j--) 
    { 
        if(f[j]>=10)printf("%c",'A'+f[j]-10); 
        else printf("%lld",f[j]); 
    } 
} 
