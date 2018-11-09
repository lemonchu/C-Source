#include<bits/stdc++.h>
using namespace std;
#define N 100001
#define inf 0x3f3f3f3f
struct edge{int to,nxxt,len;}e[N*5];
int head[N],cnt;
bool vis[N];
int dis[N];
inline void addedge(int u,int v,int w){
    cnt++;
    e[cnt].to=v;
    e[cnt].len=w;
    e[cnt].nxxt=head[u];
    head[u]=cnt;
}
queue<int>q;
void spfa(int u){
    memset(dis,0x3f,sizeof dis);
    dis[u]=0;
    vis[u]=1;
    q.push(u);
    while(!q.empty()){
        int now=q.front();q.pop();
        for(int i=head[now];i!=-1;i=e[i].nxxt){
            int to=e[i].to;
            if(dis[to]>dis[now]+e[i].len){
                dis[to]=dis[now]+e[i].len;
                if(!vis[to]){
                    q.push(to);
                    vis[to]=1;
                }
            }
        }
        vis[now]=0;
    }
}
inline int read(){
    int s=0,w=1;char ch=getchar();
    while(ch<'0'||ch>'9'){if(ch=='-')w=-1;ch=getchar();}
    while(ch>='0'&&ch<='9'){s=s*10+ch-'0';ch=getchar();}
    return s*w;
}
int n,m,S,T;
int main(){
    memset(head,-1,sizeof head);
    n=read(),m=read(),S=read(),T=read();
    for(int i=1;i<=m;i++)
    {
        int x=read(),y=read(),z=read();
        addedge(x,y,z);
    }
    spfa(S);
    cout<<dis[T]<<endl;
}