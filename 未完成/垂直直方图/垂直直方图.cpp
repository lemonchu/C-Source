#include<iostream>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
char a[4][80];
int n[26]={0}; 
int main(){
    int max=0;
    for(int i=1;i<=4;i++){
         gets(a[i]);
         int A=strlen(a[i]);
         for(int j=0;j<A;j++){
            if(a[i][j]==' ')continue;
            else n[a[i][j]-63]++;
        }
     }
     for(int i=2;i<=27;i++){
         max=max>n[i]?max:n[i];
     }
     for(int i=max;i>=1;i--){
        for(int j=2;j<=27;j++){
             if(n[j]>=max&&j!=27)printf("* ");
             else if(n[j]>=max&&j==27)printf("*");
             else if(max>n[j]&&j!=27)printf("  ");
             else printf(" ");
         }
        printf("\n");
        max--;
     }
     for(int i=65;i<=89;i++)cout<<(char)i<<" ";
     printf("Z");
     return 0;
 }