#include<iostream>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int main(){
	int s=0,r;
    scanf("%d",&r);
    for(int i=1;i<=r;i++){
    	int t;
    	scanf("%d",&t);
    	s+=t;
    }
    printf("%d",s);
    return 0;
}