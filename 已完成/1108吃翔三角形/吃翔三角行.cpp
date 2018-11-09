#include<cstdio>
int fib[20]={0,1,1,2,3,5,8,13,21,34,55,89,144,233,377,610,987,1597,2584,4181};
using namespace std;
int main(){
	int s,t,temp=0;
	scanf("%d",&s);
	for(int i=1;i<=19;i++){
		temp=temp+fib[i];
		if(temp>s){
			t=i;
			printf("%d",t-1);
			break;
		}
	}
}