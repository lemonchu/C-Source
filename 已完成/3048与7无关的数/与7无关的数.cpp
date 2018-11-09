#include<cmath>
#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    int a,s=0;
    cin>>a;
    for(int i=1;i<=a;i=i+2)s=s+i;
    printf("%d",s);
}