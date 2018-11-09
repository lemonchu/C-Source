#include<cstdio>
#include<cmath>
#include<cstring>
#include<algorithm>
using namespace std;
int main(){
	int k,s=0;
	scanf("%d",&k);
	while(k!=1){
		if(k%2==0)k/=2;
		else k=k*3+1;
		s++; 
	}
	printf("%d",s+1);
	return 0;
}