#include<iostream>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<algorithm>
int main(){
	char c;
	printf("猜字谜：\n");
	printf("二人顶破天\n");
	scanf("%c",&c);
	if(c==-52)printf("恭喜你，答对了！");
	else printf("对不起，你答错了！");
	return 0;
}