#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
inline void read(int &x){
    int s=0,w=1;
    char c=getchar();
    while(!isdigit(c)){if(c=='-')w=-1;c=getchar();}
    while(isdigit(c)){s=(s<<3)+(s<<1)+c-'0',c=getchar();}
    x=s*w;
}
struct act{
    int begin;
    int end;
}work[1000000];
int n,s=0,endtime=0;
bool cmp(act x,act y){
    return x.end<y.end;
}
int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++){
    	read(work[i].begin);
    	read(work[i].end);
    }
    sort(work,work+n,cmp);
    for(int i=0;i<n;i++){
        if(work[i].begin>=endtime){
            s++;
            endtime=work[i].end;
        }
    }
    printf("%d",s);
    return 0;
}