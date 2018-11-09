#include <bits/stdc++.h>

#define MAXN 100010
#define inf INT_MAX/2

using namespace std;

inline int rd(){
    int x=0,y=1;char c=getchar();
    while(!isdigit(c)){if(c=='-')y=-y;c=getchar();}
    while(isdigit(c))x=x*10+c-'0',c=getchar();
    return x*y;
}

struct splay_tree{
    int son[MAXN][2],fa[MAXN],val[MAXN],key[MAXN],sz[MAXN];
    int tot,root;
    bool rev[MAXN];
    
    void init(){
        memset(son,0,sizeof(son));
        memset(fa,0,sizeof(fa));
        memset(rev,0,sizeof(rev));
        val[1]=-inf,val[2]=inf;
        key[1]=-inf,key[2]=inf;
        son[2][0]=1;
        sz[2]=2;sz[1]=1;
        fa[1]=2;
        tot=2;
        root=2;
    }
    void add(int x,int k){
        int now=root,pre;
        while(1){
            pre=now;
            now=son[now][k>key[now]];
            if(!now){
                now=++tot;
                son[pre][k>key[pre]]=now;
                fa[now]=pre;
                val[now]=x;
                key[now]=k;
                sz[now]=1;
                pushup(pre);
                splay(x,0);
                return;
            }
        }
    }
    bool getlr(int x){
        return son[fa[x]][1]==x;
    }
    void Rev(int x){
        if(!x)return;
        rev[x]^=1;
        swap(son[x][0],son[x][1]);
    }
    void pushdown(int x){
        if(!x)return;
        if(rev[x]){
            Rev(son[x][0]);
            Rev(son[x][1]);
            rev[x]^=1;
        }
    }
    void pushup(int x){
        sz[x]=sz[son[x][0]]+sz[son[x][1]]+1;
    }
    void Set(int x,int f,int w){
        son[f][w]=x;
        fa[x]=f;
    }
    void Rotate(int x){
        int f=fa[x],ff=fa[f],w=getlr(x);
        Set(x,ff,son[ff][1]==f);
        Set(son[x][w^1],f,w);
        Set(f,x,w^1);
        pushup(f),pushup(x);
    }
    /*void Rotate(int x){
        int f=fa[x],ff=fa[f],which=getlr(x);
        son[f][which]=son[x][which^1];
        fa[son[f][which]]=f;fa[f]=x;
        son[x][which^1]=f;fa[x]=ff;
        if(ff)son[ff][son[ff][1]==f]=x;
        pushup(f);
        pushup(x);
    }*/ 
    void splay(int x,int to){
        pushdown(x);
        for(int f=fa[x]; f!=to; f=fa[x]){
            //cout<<f<<' '<<to<<endl;
            if(fa[f]!=to)Rotate(getlr(x)==getlr(f)?f:x);
            Rotate(x);
        }
        if(to==0)root=x;
    }
    int getkth(int x){
        int now=root;
        while(now){
            //cout<<now<<' '<<sz[son[now][0]]<<endl;
            pushdown(now);
            if(sz[son[now][0]]==x-1)return now;
            else if(sz[son[now][0]]<x)x-=sz[son[now][0]]+1,now=son[now][1];
            else now=son[now][0];
        }
    }
    void spilit(int l,int r){
        splay(getkth(l),0);
        //cout<<"******"<<endl;
        splay(getkth(r+2),root);
    }
    void Reverse(int l,int r){
        spilit(l,r);
        Rev(son[son[root][1]][0]);
    }
    void print(int x){
        if(!x)return;
        pushdown(x);
        print(son[x][0]);
        if(val[x]!=inf && val[x]!=-inf)printf("%d ",val[x]);
        print(son[x][1]);
    }
}T;

int n,m;

int main(){
    n=rd(),m=rd();
    T.init();
    for(int i=1; i<=n; i++)T.add(i,i);
    while(m--){
        int x=rd(),y=rd();
        T.Reverse(x,y);
        //T.print(T.root);
        //puts("");
    }
    T.print(T.root);
    puts("");

    return 0;
}