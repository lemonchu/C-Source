#include<iostream>
#include<cmath>
#include<string>
#include<cstdio>
using namespace std;
int real(int x,int y){
	if(x==1)return 1;
	while(x!=1&&x!=0){
		if(x>=y){
			x=x-y;
		}else{
			y=y-x;
		}
	}
	if(x==1)return 1;
	if(x==1)return 0;
}
int main(){
	int a;
	cin>>a;
	int real(int x,int y);
	for(int i=1;i<a;i++){
		if(real(i,a)==1)cout<<i<<"/"<<a<<" ";
	}
} 