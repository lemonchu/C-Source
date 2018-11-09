#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main(){
	int a[10],b,s=8;
	for(int i=0;i<=8;i++)scanf("%d",&a[i]);
	scanf("%d",&b);
	for(int i=8;i>=0;i--){
		if(b<a[i])s--;
		if(b>=a[i])break;
	}
	s++; 
	for(int i=8;i>=s;i--){
		a[i+1]=a[i];
	}
	a[s]=b;
	for(int i=0;i<=9;i++){
		printf("%d\n",a[i]); 
	}
}