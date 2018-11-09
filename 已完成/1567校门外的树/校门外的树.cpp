#include<cstdio>
using namespace std;
int main(){
    int a[10001],l,m,n,x,y,s=0;
    scanf("%d%d",&l,&m);
    for(int i=0;i<=l;i++) a[i]=1;
    for(int i=1;i<=m;i++){
        scanf("%d%d",&x,&y);
        for(int j=x;j<=y;j++) a[j]=0;
    }
    for(int i=0;i<=l;i++)
    if(a[i]==1)++s;
    printf("%d",s);
    return 0;
}