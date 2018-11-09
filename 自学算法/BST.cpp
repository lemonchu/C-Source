#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;
inline int read(){
    register int x=0;register char ch=getchar();
    while(ch<'0'||ch>'9')ch=getchar();
    while(ch<='9'&&ch>='0'){x=x*10+ch-'0';ch=getchar();}
    return x;
}
struct BST_Point{int num,lc,rc,fa;}empty;
struct BST{
	BST_Point tree[100000];
	int siz,writetip;
	inline void insert(int x){
		if(siz==0){
			tree[++writetip].num=x;
			siz++;
		}else{
			int now=1;
			while(1){
				if(tree[now].num==x)return;
				else if(x>tree[now].num){
					if(!tree[now].rc){
						tree[now].rc=++siz;
						tree[tree[now].rc].num=x;
						tree[tree[now].rc].fa=now;
						break;
					}else now=tree[now].rc;
				}else{
					if(!tree[now].lc){
						tree[now].lc=++siz;
						tree[tree[now].lc].num=x;
						tree[tree[now].lc].fa=now;
						break;
					}else now=tree[now].lc;
				}
			}
		}
	}
	inline int find(int x){
		int now=1;
		while(1){
			if(tree[now].num==x)return now;
			else if(x>tree[now].num){
				if(!tree[now].rc)return 0;
				else now=tree[now].rc;
			}else{
				if(!tree[now].lc)return 0;
				else now=tree[now].lc;
			}
		}
	}
	inline int find_min(int x){
		int now=x;
		while(tree[now].lc)now=tree[now].lc;
		return now;
	}
	inline void erase(int x){
		int loc=find(x);
		if(!tree[loc].lc&&!tree[loc].rc){
			printf("Com:1\n");
			if(tree[])
			tree[loc]=empty;
			siz--;
		}else if(!tree[loc].lc||!tree[loc].rc){
			printf("Com:2\n");
			if(!tree[loc].lc)tree[tree[loc].rc].fa=tree[loc].fa,tree[tree[loc].fa].rc=tree[loc].rc;
			else tree[tree[loc].lc].fa=tree[loc].fa,tree[tree[loc].fa].lc=tree[loc].lc;
			siz--;
		}else{
			printf("Com:3\n");
			int min_loc=find_min(loc);
			int min_num=tree[min_loc].num;
			tree[loc].num=min_num;
			tree[tree[min_loc].fa].lc=tree[min_loc].lc;
			siz--;
		}
	}
	inline int upper_bound(int x){
		
	}
	inline int lower_bound(int x){
		
	}
	BST(){
		siz=0,writetip=0;
		memset(tree,0,sizeof(tree));
	}
};
BST bst;
inline void print(int x){
	if(bst.tree[x].lc)print(bst.tree[x].lc);
	printf("%d ",bst.tree[x].num);
	if(bst.tree[x].rc)print(bst.tree[x].rc);
}
int main(){
	int n,p;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		bst.insert(read());
		print(1);
		putchar('\n');
	}
	for(int i=1;i<=n;i++){
		bst.erase(read());
		print(1);
		putchar('\n');
	}
	return 0;
}
/*
10
1 10 9 2 3 8 7 4 5 6
*/