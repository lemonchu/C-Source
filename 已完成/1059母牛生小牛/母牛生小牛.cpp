#include<iostream>  
#include<stdio.h>  
#include<cmath>  
#include<algorithm>  
using namespace std;  
int fun(int x) {  
    if (x == 1)return 1;  
    if (x == 2)return 1;  
    if (x == 3)return 1;  
    if (x == 4)return 2;  
    else return fun(x - 1) + fun(x - 3);  
}  
int main(){
	int text;
	cin>>text;
	cout<<fun(text)<<endl;   
    return 0;  
} 