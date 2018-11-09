#include<cstdio>
#include<cstring>
#include<cmath>
int n;
bool flag[100000000+1];
int count(int n){
    int cnt=0;
    n++;
    flag[2]=1;
    for (int i=3;i<n;++i) {
        flag[i++]=1;
        flag[i]=0;
    }
    for (int i=3;i<=sqrt(n*1.0);++i){
        if(flag[i]!=1)continue;
        for(int j=i*i;j<=n;j+=i){
            flag[j]=0;
        }
    }
    for (int i=1;i<=n;++i)
        cnt+=flag[i];
    return cnt;
}
int main(){
	scanf("%d",&n);
	int tttt=count(n);
	if(n==0)tttt=0;
	if(n==1)tttt=0;
	if(n==2)tttt=1;
	printf("%d",tttt);
	return 0;
}