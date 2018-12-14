#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;
inline char gc(){
    static char buf[100000],*p1=buf,*p2=buf;
    return p1==p2&&(p2=(p1=buf)+fread(buf,1,100000,stdin),p1==p2)?EOF:*p1++;
}
inline int read(){
    int s=0,w=1;char c=gc();
    while(!isdigit(c)){if(c=='-')w=-1;c=gc();}
    while(isdigit(c))s=(s<<3)+(s<<1)+c-'0',c=gc();
    return s*w;
}
inline void write(int x){
    if(x<0)x=-x,putchar('-');
    if(x>9)write(x/10);
    putchar(x%10+'0');
}
int val[100010],size[100010],ls[100010],rs[100010],cnt;
inline void lturn(int &root){
    int temp=rs[root];
    rs[root]=ls[temp];
    ls[temp]=root;
    size[temp]=size[root];
    size[root]=size[ls[root]]+size[rs[root]]+1;
    root=temp;
}
inline void rturn(int &root){
    int temp=ls[root];
    ls[root]=rs[temp];
    rs[temp]=root;
    size[temp]=size[root];
    size[root]=size[ls[root]]+size[rs[root]]+1;
    root=temp;
}
inline void maintain(int &root,bool flag){
    if(!flag){
        if(size[ls[ls[root]]]>size[rs[root]])rturn(root);
        else if(size[rs[ls[root]]]>size[rs[root]])lturn(ls[root]),rturn(root);
        else return ;
    }else{
        if(size[rs[rs[root]]]>size[ls[root]])lturn(root);
        else if(size[rs[ls[root]]]>size[ls[root]])rturn(rs[root]),lturn(root);
        else return ;
    }
    maintain(ls[root],false);
    maintain(rs[root],true);
    maintain(root,true);
    maintain(root,false);
}
inline void insert(int &root,int x){
    if(!root){
        root=++cnt;
        size[root]=1;
        val[root]=x;
        return ;
    }
    size[root]++;
    if(x<val[root])insert(ls[root],x);
    else insert(rs[root],x);
    maintain(root,x>=val[root]);
}
inline int del(int &root,int x){
    size[root]--;
    int temp;
    if(x==val[root]||(x<val[root]&&!ls[root])||(x>val[root]&&!rs[root])){
        temp=val[root];
        if(!ls[root]||!rs[root])root=ls[root]+rs[root];
        else val[root]=del(ls[root],val[root]+1);
        return temp;
    }
    if(x<val[root])temp=del(ls[root],x);
    else temp=del(rs[root],x);
    return temp;
}
inline int find(int root,int x){
    while(root){
        if(x<=size[ls[root]])root=ls[root];
        else if(x==size[ls[root]]+1)break;
        else x-=size[ls[root]]+1,root=rs[root];
    }
    return val[root];
}
inline int Rank(int root,int x){
    int ans=0;
    while(root){
        if(x<=val[root])root=ls[root];
        else ans+=size[ls[root]]+1,root=rs[root];
    }
    return ans;
}
int n,opt,x,rt;
int main(){
    n=read();
    while(n--){
    	opt=read(),x=read();
        if(opt==1)insert(rt,x);
        else if(opt==2)del(rt,x);
        else if(opt==3)write(Rank(rt,x)+1),putchar(10);
        else if(opt==4)write(find(rt,x)),putchar(10);
        else if(opt==5)write(find(rt,Rank(rt,x))),putchar(10);
        else write(find(rt,Rank(rt,x+1)+1)),putchar(10);
    }
    return 0;
}
