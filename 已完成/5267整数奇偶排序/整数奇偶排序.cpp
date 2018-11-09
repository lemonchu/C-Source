#include<cstdio>
#include<algorithm>
using namespace std;
int num[10],odd[10],d[10],tod=0,td=0;
bool cmp(int x,int y){
	return x>=y;
} 
int main(){
	for(int i=0;i<10;i++)scanf("%d",&num[i]);
	for(int i=0;i<10;i++){
		if(num[i]%2==0){
			d[td]=num[i];
			td++;
		}
		else{
			odd[tod]=num[i];
			tod++;
		}
	}
	sort(odd,odd+td,cmp);
	sort(d,d+tod);
	for(int i=0;i<td;i++)printf("%d ",odd[i]);
	for(int i=0;i<tod;i++)printf("%d ",d[i]);
	return 0;
}