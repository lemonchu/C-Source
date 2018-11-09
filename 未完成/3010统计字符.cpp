#include<cstdio>
#include<cstring>
using namespace std;
char str[100000];
int abc(char a){
	if(a>='A'&&a<='Z')return 1;
	else if(a>='a'&&a<='z')return 0;
}
int main(){
	int sum=0;
	gets(str);
	int test=abc(str[0]);
	if(test==1)sum++;
	for(int i=1;i<strlen(str);i++){
		if(abc(str[i])!=test){
			test=abc(str[i]);
			sum++;
		}
	}
	sum+=strlen(str);
	printf("%d",sum);
	return 0;
}