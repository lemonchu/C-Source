#include<cstdio>
#include<cmath>
using namespace std;
bool flag,tempflag=false;
int main(){
	long long a;
	scanf("%lld",&a);
	if(a==0){
		printf("0");
		return 0;
	}
	else if(a>0)flag=true;
	else{
		flag=false;
		printf("-");
		a=-a;
	}
	while(a!=0){
		if(a%10!=0&&tempflag==false)tempflag=true;
		if(tempflag==true)printf("%d",a%10);
		a=a/10;
	}
	return 0;
}