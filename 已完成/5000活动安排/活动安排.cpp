#include<cstdio>
#include<algorithm>
using namespace std;
struct act{
	int begin;
	int end;
}work[1000];
int n,s=0,endtime=0;
bool cmp(act x,act y){
	return x.end<y.end;
}
int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++)scanf("%d%d",&work[i].begin,&work[i].end);
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