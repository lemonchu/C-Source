#include<iostream>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int sdk[9][9];
int hp(int a[]){
	int numext[10]={0};
	for(int i=0;i<9;i++){
		if(numext[a[i]]==1)return 0;
		else{
			numext[a[i]]=1;
		}
	}
	return 1;
}
int sp(int a[][9]){
	int numext[10]={0};
	for(int i=0;i<9;i++){
		if(numext[a[i][0]]==1)return 0;
		else{
			numext[a[i][0]]=1;
		}
	}
	return 1;
}
int jz(int a[][9]){
	for(int i=0;i<3;i++){
    int numext[10]={0};
    	for(int j=0;j<3;j++){
     		if(numext[a[i][j]]==1)return 0;
       		else numext[a[i][j]]=1;
        }
	}
	for(int i=0;i<3;i++){
    int numext[10]={0};
    	for(int j=3;j<6;j++){
     		if(numext[a[i][j]]==1)return 0;
       		else numext[a[i][j]]=1;
        }
	}
	for(int i=0;i<3;i++){
    int numext[10]={0};
    	for(int j=6;j<9;j++){
     		if(numext[a[i][j]]==1)return 0;
       		else numext[a[i][j]]=1;
        }
	}
	for(int i=3;i<6;i++){
    int numext[10]={0};
    	for(int j=0;j<3;j++){
     		if(numext[a[i][j]]==1)return 0;
       		else numext[a[i][j]]=1;
        }
	}
	for(int i=3;i<6;i++){
    int numext[10]={0};
    	for(int j=3;j<6;j++){
     		if(numext[a[i][j]]==1)return 0;
       		else numext[a[i][j]]=1;
        }
	}
	for(int i=3;i<6;i++){
    int numext[10]={0};
    	for(int j=6;j<9;j++){
     		if(numext[a[i][j]]==1)return 0;
       		else numext[a[i][j]]=1;
        }
	}
	for(int i=6;i<9;i++){
    int numext[10]={0};
    	for(int j=0;j<3;j++){
     		if(numext[a[i][j]]==1)return 0;
       		else numext[a[i][j]]=1;
        }
	}
	for(int i=6;i<9;i++){
    int numext[10]={0};
    	for(int j=3;j<6;j++){
     		if(numext[a[i][j]]==1)return 0;
       		else numext[a[i][j]]=1;
        }
	}
	for(int i=6;i<9;i++){
    int numext[10]={0};
    	for(int j=6;j<9;j++){
     		if(numext[a[i][j]]==1)return 0;
       		else numext[a[i][j]]=1;
        }
	}
	return 1;
}
int main(){
	for(int i=0;i<9;i++)for(int j=0;j<9;j++)scanf("%d",&sdk[i][j]);
	for(int i=0;i<9;i++)if(hp(sdk[i])==0){
		printf("Wrong");
		return 0;
	}
    if(sp(sdk)==0){
    	printf("Wrong");
    	return 0;
    }
    if(jz(sdk)==0){
    	printf("Wrong");
    	return 0;
    }
    printf("Right");
    return 0;
}