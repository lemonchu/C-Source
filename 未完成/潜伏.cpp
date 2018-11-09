#include<cstdio>
#include<cstring>
using namespace std;
char pass[101],code[101],key[28],input[101],output[101];
int a[27];
int main(){
	for(int i=1;i<27;i++)a[i]=0;
	gets(pass);gets(code);gets(input);
	int len=strlen(pass);
	for(int i=0;i<len;i++){
		if(a[pass[i]-64]==0){
			a[pass[i]-64]=1;
			key[pass[i]-64]=code[i];
		}
		else if(a[pass[i]]==1&&code[i]!=key[pass[i]-64]){
			printf("Failed");
			return 0;
		}
	}
	for(int i=1;i<27;i++){
		if(a[i]==0){
			printf("Failed");
			return 0;
		}
	}
	int lent=strlen(input);
	for(int i=0;i<lent;i++)output[i]=key[input[i]-64];
	puts(output);
	return 0;
}