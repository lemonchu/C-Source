#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;
struct Edge{int to,next;};
inline int read(){
    register char ch=getchar();
    while((ch<'0'||ch>'9')&&ch!='-')ch=getchar();
    register bool neg=ch=='-';
	register int in=neg?0:ch-'0';ch=getchar();
    while(ch>='0'&&ch<='9')in=(in<<3)+(in<<1)+ch-'0',ch=getchar();
    return neg?-in:in;
}
int DFN[100005],Low[100005],head[100005];
int st[100005],top=0,num,edge_num=0,cnt=0;
int co[100005];
Edge e[100005];
inline void add_edge(int from,int to){
	e[++edge_num].to=to;
	e[edge_num].next=head[from];
	head[from]=edge_num;
}
void tarjan(int u){
	int v;
	DFN[u]=Low[u]=++num;
	st[++top]=u;
	for(register int i=head[u];i;i=e[i].next){
		v=e[i].to;
		if(!DFN[v]){
			tarjan(v);
			Low[u]=min(Low[u],Low[v]);
		}else if(!co[v])Low[u]=min(Low[u],DFN[v]);
	}
	if(Low[u]==DFN[u]){
		co[u]=++cnt;
		while(st[top]!=u){
			co[st[top]]=cnt;
			top--;
		}
		top--;
	}
}
int main(){
	int x,y;
	int n=read(),m=read();
	for(register int i=1;i<=m;i++){
		x=read(),y=read();
		add_edge(x,y);
	}
	for(register int i=1;i<=n;i++)if(!DFN[i])tarjan(i);
	printf("%d\n",cnt);
	return 0;
}