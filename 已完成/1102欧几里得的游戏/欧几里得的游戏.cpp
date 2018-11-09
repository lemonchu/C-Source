#include<cstdio>
#include<algorithm>
using namespace std;
int n,m,c,z,a;
bool f;
void dfs(int x,int y,int p){
     if(f) return;
     if(x-y>y) {
         f=true;a=p;
         return;
     }
     if(x%y==0) {
         f=true;a=p;
         return;
     }
     dfs(y,x-y,(p+1)%2);
}
int main(){
    scanf("%d",&c);
    for(int i=1;i<=c;i++){
        scanf("%d%d",&n,&m);
        f=false;
        dfs(max(n,m),min(n,m),1);
        if(a==1) printf("Stan wins\n");
        else printf("Ollie wins\n");
    }
    return 0;
}