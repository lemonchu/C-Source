#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<algorithm>
using namespace std;
int f(int x){
	if(x==1)return 10;
	else return f(x-1)+2;
}
int main(){
	int a;
	scanf("%d",&a);
	printf("%d",f(a));
    return 0;
}