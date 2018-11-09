#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#define ll long long
using namespace std;
struct Martix{
    int row,line;
    ll squ[6][6];
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
        line=4,row=4;
        squ[1][1]=1,squ[1][2]=1,squ[1][3]=0,squ[1][4]=0;
		squ[2][1]=0,squ[2][2]=1,squ[2][3]=1,squ[2][4]=0;
		squ[3][1]=0,squ[3][2]=0,squ[3][3]=1,squ[3][4]=1;
		squ[4][1]=0,squ[4][2]=0,squ[4][3]=1,squ[4][4]=0;
    }
    inline void build_std_fib_unit(){
        line=1,row=3;
        squ[1][1]=0,squ[2][1]=1,squ[3][1]=1,squ[4][1]=1;
    }
    inline void print(){
        printf("\n");
        for(int i=1;i<=row;i++){
            for(int j=1;j<=line;j++)printf("%d ",squ[i][j]);
            printf("\n");
        }
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
ll Get_Fib(ll want,ll mod){
    if(want==0)return 0;
    if(want==1)return 1%mod;
    if(want==2)return 3%mod;
    if(want==3)return 9%mod;
    Martix left,right;
    left.bulid_fib_unit();right.build_std_fib_unit();
    Martix AnsL=QuickPow(left,want-1,mod);
	Martix ans=AnsL*right;
	return want*(ans.squ[2][1])-ans.squ[1][1];
}
ll r,x,y;
int main(){
    scanf("%lld%lld",&x,&y);
    printf("%lld\n",Get_Fib(x,y)%y);
    return 0;
}