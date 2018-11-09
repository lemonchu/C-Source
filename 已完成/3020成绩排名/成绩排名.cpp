#include<iostream>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
struct info{
	char name[11];
	int score;
}stu[100000];
int abc(char m[],char n[]){
	int flen=strlen(m),slen=strlen(n);
	for(int k=0;k<min(flen,slen);k++){
		if(m[k]>n[k])return 0;
		if(m[k]<n[k])return 1;
	}
	if(flen>slen)return 0;
	else return 1;
} 
bool cmp(info x,info y){
	if(x.score!=y.score)return x.score>y.score;
	else return abc(x.name,y.name);
}
int main(){
	int s;
	scanf("%d",&s);
	for(int i=0;i<s;i++)scanf("%s%d",stu[i].name,&stu[i].score);
	sort(stu,stu+s,cmp);
	for(int i=0;i<s;i++)printf("%s %d\n",stu[i].name,stu[i].score);
	return 0;
}