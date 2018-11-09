#include<cstdio>
#include<cmath>
#include<cstring>
#include<algorithm>
using namespace std;
char word[101];
int ext[26];
int prime(int x){
	if(x<2)return 0;
	for(int i=2;i<sqrt(x);i++)if(x%i==0)return 0;
	return 1;
}
int p(int l[]){
	for(int i=0;i<26;i++)if(l[i]!=0)return ext[i];
}
int main(){
	gets(word);
	for(int i=0;i<strlen(word);i++)ext[word[i]-97]++;
	sort(ext,ext+26);
	if(prime(ext[25]-p(ext)))printf("Lucky Word\n%d",ext[25]-p(ext));
	else printf("No Answer\n0");
	return 0;
}