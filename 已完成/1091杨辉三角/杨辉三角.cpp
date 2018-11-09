#include<iostream>  
using namespace std;  
int main()  {  
    int n;
    while(cin>>n){ 
    int a[n][n];  
    int i,j;  
    for(i=0;i<=n-1;i++){  
        for(j=0;j<=i;j++){  
            if(j==0||j==i)a[i][j]=1;  

            else a[i][j]=a[i-1][j-1]+a[i-1][j];  
            cout<<a[i][j]<<" ";  
        }  
        cout<<endl;  
    }
    cout<<endl;
    } 
}  