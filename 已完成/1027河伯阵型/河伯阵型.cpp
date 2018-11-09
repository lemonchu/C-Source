#include<iostream>
#include<cmath>
#include<string>
#include<cstdio>
using namespace std;
int main(){
	int a,i,k,u;
	char ch;
	cin>>a>>ch;
	for(i=1;i<=a;i++){
		for(k=1;k<=(a-i);k++){
			cout<<" ";
		}
		for(u=1;u<=(2*i-1);u++){
			cout<<ch; 
		}
		cout<<endl;
	}
	for(i=1;i<a;i++){
		for(k=1;k<=i;k++){
			cout<<" ";
		}
		for(u=1;u<=((2*a-1)-2*i);u++){
			cout<<ch; 
		}
		cout<<endl;
	}
} 