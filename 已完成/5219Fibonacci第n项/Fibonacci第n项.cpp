#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#define ll long long
using namespace std;
struct Martix{
    int row,line;
    ll squ[3][3];
    inline void clear(){
        line=0,row=0;
        memset(squ,0,sizeof(squ));
    }
    Martix operator*(const Martix &b)const{
        Martix temp;
        temp.clear();
        temp.line=b.line;
        temp.row=row;
        for(int i=1;i<=temp.row;i++){
            for(int j=1;j<=temp.line;j++){
                for(int k=1;k<=line;k++){
                    temp.squ[i][j]+=(squ[i][k]*b.squ[k][j]);
                }
            }
        }
        return temp;
    }
    Martix operator%(int mod){
        Martix temp;
        temp.row=row,temp.line=line;
        for(int i=1;i<=row;i++){
            for(int j=1;j<=line;j++)temp.squ[i][j]=squ[i][j]%mod;
        }
        return temp;
    }
    inline void bulid_fib_unit(){
        line=2,row=2;
        squ[1][1]=1,squ[1][2]=1,squ[2][1]=1,squ[2][2]=0;
    }
    inline void build_std_fib_unit(){
        line=1,row=2;
        squ[1][1]=1,squ[2][1]=1;
    }
};
inline Martix QuickPow(Martix Unit,int Pow,int mod){
    if(Pow==1)return Unit%mod;
    else if(Pow%2==0){
        Martix temp=QuickPow(Unit,Pow/2,mod)%mod;
        return (temp*temp)%mod;
    }else{
        Martix temp=QuickPow(Unit,Pow/2,mod)%mod;
        return (((temp*temp)%mod)*Unit)%mod;
    }
}
ll Get_Fib(int want,int mod){
    if(want==0)return 0;
    if(want==1)return 1%mod;
    if(want==2)return 1%mod;
    Martix StdUnit,StdFib;
    StdUnit.clear();
    StdUnit.bulid_fib_unit();
    StdFib.build_std_fib_unit();
    Martix Left=QuickPow(StdUnit,want-2,mod);
    Martix ans=Left*StdFib;
    return ans.squ[1][1];
}
int r,x,y;
int main(){
    scanf("%d%d",&x,&y);
    printf("%lld\n",Get_Fib(x,y)%y);
    return 0;
}