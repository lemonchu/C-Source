#include<cstdio>
#include<algorithm>
using namespace std;
int num[100000];
int main(){
	int r;
	scanf("%d",&r);
	for(int i=0;i<r;i++)scanf("%d",&num[i]);
	sort(num,num+r);
	int tip=num[0],s=r+1;
	for(int i=0;i<r;i++){
		if(num[i]==tip){
			s--;
		}
		tip=num[i];
	}
	printf("%d\n%d",s,num[0]);
	tip=num[0];
	for(int i=1;i<r;i++){
		if(num[i]!=tip)printf(" %d",num[i]);
		tip=num[i];
	}
	return 0;
}