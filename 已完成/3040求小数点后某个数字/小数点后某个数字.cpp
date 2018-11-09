#include<iostream>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int main(){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	for(int i=1;i<c;i++){
		a=a*10;
		a=a%b; 
	}
	printf("%d",(a*10/b)%10);
    return 0;
}