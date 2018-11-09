#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<queue>
using namespace std;
inline int read(){
    int x=0;char ch=getchar();
    while(ch<'0'||ch>'9')ch=getchar();
    while(ch<='9'&&ch>='0'){x=x*10+ch-'0';ch=getchar();}
    return x;
}
struct Edge{int to,dis,nxt;};
struct node{
	int to,dis;
	inline bool operator<(const node b)const{return dis>b.dis;}
};
int head[5000004],cnt=0;
int dis[5000004];
Edge e[5000004];
int m,n;
inline void add_edge(int from,int to,int dis){
	e[++cnt].to=to;
	e[cnt].dis=dis;
	e[cnt].nxt=head[from];
	head[from]=cnt;
}
node temp;
Edge tempedge;
int to,pass;
inline void Dijkstra(int s){
	for(register int i=1;i<=m;i++)dis[i]=2147483647;
	dis[s]=0;
	priority_queue<node>Q;
	Q.push((node){s,0});
	while(!Q.empty()){
		temp=Q.top();Q.pop();
		to=temp.to,pass=temp.dis;
		if(pass!=dis[to])continue;
		for(register int i=head[to];i;i=e[i].nxt){
			tempedge=e[i];
			if(dis[e[i].to]>dis[to]+e[i].dis){
				dis[e[i].to]=dis[to]+e[i].dis;
				Q.push((node){e[i].to,dis[e[i].to]}); 
			}
		}
	}
}
int st;
int main(){
	m=read(),n=read(),st=read();
	int en=read();
	int rdf,rdt,rdd;
	for(register int i=1;i<=n;i++){
		rdf=read(),rdt=read(),rdd=read();
		add_edge(rdf,rdt,rdd);
	}
	Dijkstra(st);
	printf("%d\n",dis[en]);
	return 0;
}