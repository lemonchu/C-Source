#include<cstdio>
#include<cmath>
#include<cstring>
#include<algorithm>
#define ll long long
using namespace std;
char ufo[7],gro[7];
ll a=1,b=1;
int main(){
	gets(ufo);
	gets(gro);
	for(int i=0;i<strlen(ufo);i++)a*=(ufo[i]-64);
	for(int i=0;i<strlen(gro);i++)b*=(gro[i]-64);
	if(b%47==a%47)printf("GO");
	else printf("STAY");
	return 0;
}