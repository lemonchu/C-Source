#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
char word[5100],reading[51];
bool flag=true;
struct message{
	char work[51];
}art[100];
bool cmp(message a,message b){
	return strcmp(a.work,b.work)<=0;
}
int main(){
	gets(word);
	int wordlen=strlen(word),w=0,readchar=0;
	for(int i=0;i<=wordlen;i++){
		if(i==wordlen){
			break;
		} 
		if(word[i]!=' '){
			flag=true;
			art[w].work[readchar]=word[i];
			readchar++;
		}
		else{
			if(flag==true)w++,flag=false;
			readchar=0;
			continue;
		}
	}
	sort(art,art+w+1,cmp);
	for(int i=0;i<=w;i++)if(strcmp(art[i].work,art[i-1].work)!=0||i==0)printf("%s\n",art[i].work);
	return 0;
}