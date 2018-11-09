#include<cstring>
#include<cstdio>
#include<cmath>
#include<algorithm>
#define ll long long
using namespace std;
char key[100],pass[1000],cp[1000];
int keyl,passl;
int del(char str[]){
	int kx=strlen(str);
	for(int i=strlen(str);i>=0;i--){
		if(str[i]==' ')kx--;
		if(str[i-1]!=' ')return kx;
	}
}
int returnb(char x){
	if(x>=65&&x<=90)return x-65;
	else return x-97;
}
char Comp(char a,char b){
	int pro;
	if(a>=65&&a<=90)pro=65;
	else if(a>=97&&a<=122)pro=97;
	a-=returnb(b);
	if(a<pro)a+=26;
	return a;
}
int main(){
	gets(key);
	gets(pass);
	keyl=del(key);
	passl=del(pass);
	for(int i=0;i<passl;i++)cp[i]=Comp(pass[i],key[i%keyl]);
	puts(cp);
	return 0;
}