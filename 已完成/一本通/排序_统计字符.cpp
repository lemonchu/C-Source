#include<cstdio>
#include<cmath>
#include<cstring>
#include<algorithm>
using namespace std;
char a[1001],maxchar,reading;
int maxi=1,temp=1;
int main(){
	gets(a);
	sort(a,a+strlen(a));
	maxchar=a[0],reading=a[0];
	for(int i=1;i<=strlen(a);i++){
		if(i==strlen(a)){
			if(temp>maxi)maxi=temp,maxchar=a[i-1];
			break;
		}
		if(a[i]==reading)temp++;
		else{
			if(temp>maxi)maxi=temp,maxchar=a[i-1];
			temp=1,reading=a[i]; 
		}
	}
	printf("%c %d",maxchar,maxi);
	return 0;
}