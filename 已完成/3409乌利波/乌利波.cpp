#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
void re(char a[],char b[]){
	int s=0;
    while(strstr(a,b)!=NULL){
   	    *strstr(a,b)='#';
   	    s++;
    }
    printf("%d\n",s);
}
int r;
char x[1000],y[1000];
int main(){
	scanf("%d",&r);
	for(int i=1;i<=r;i++){
		cin>>x>>y;
		re(y,x);
	}
	return 0;
} 