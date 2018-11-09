#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
struct info{
	char num[11];
	int age;
	int index;
}patient[100];
bool cmp(info x,info y){
	if(x.age>=60&&y.age>=60){
		if(x.age>y.age)return x.age>y.age;
		else return strcmp(x.num,y.num)
	}
}
int main(){
	int range,ind=0;
	scanf("%d",&range);
	for(int i=0;i<range;i++){
		scanf("%s %d",patient[i].num,&patient[i].age);
		patient[i].index=ind;
		ind++;
	}
	sort(patient,patient+range,cmp);
	for(int i=0;i<range;i++)printf("%s %d\n",patient[i].num,patient[i].age);
	return 0;
}