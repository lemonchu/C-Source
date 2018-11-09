#include<cstdio>
#include<cmath>
#include<cstring>
#include<algorithm>
using namespace std;
int a[50000];
int s=1,tip,maxi=0,mtip;
int main(){
	int r;
	scanf("%d",&r);
	for(int i=0;i<r;i++)scanf("%d",&a[i]);
	sort(a,a+r);
	tip=a[0];
	for(int i=1;i<r;i++){
		if(a[i]==tip)s++;
		else{
			if(maxi<s){
				maxi=s;
				mtip=a[i-1];
			}
			tip=a[i];
			s=1;
			continue;
		}
	}
	printf("%d\n%d",mtip,maxi);
	return 0;
}