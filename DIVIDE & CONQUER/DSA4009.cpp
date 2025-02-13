#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define run() int t; cin>>t; while(t--)
#define ll long long
const ll MOD= 1e9+7;
ll n,k;
struct matran{
    ll m[15][15];
    friend matran operator *(matran a,matran b){
        matran res;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                res.m[i][j]=0;
                for(int z=0;z<n;z++){
                    res.m[i][j]+=(a.m[i][z]*b.m[z][j])%MOD;
                    res.m[i][j]%=MOD;
                }
            }
        }
        return res;
    }
};
matran pow1(matran a,ll n){
    if(n==1) return a;
    matran x=pow1(a,n/2);
    if(n%2==1) return x*x*a;
    else return x*x;
}
int main(){
    faster();
    run(){
        cin>>n>>k;
        matran a,res;
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>a.m[i][j];
        res=pow1(a,k);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<res.m[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}