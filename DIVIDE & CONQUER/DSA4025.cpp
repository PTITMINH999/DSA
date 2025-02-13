#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define run() int t; cin>>t; while(t--)
#define ll long long
const ll mod=1e9+7;
struct matran{
    ll m[3][3]={};
    void init(){
        m[1][1]=m[2][2]=1;
    }
    matran operator *(matran a){
        matran res;
        for(int i=1;i<=2;i++){
            for(int j=1;j<=2;j++){
                for(int k=1;k<=2;k++){
                    res.m[i][j]+=(m[i][k]*a.m[k][j])%mod;
                    res.m[i][j]%=mod;
                }
            }
        }
        return res;
    }
};
ll solve(ll n){
    matran b;
    b.m[1][1]=b.m[1][2]=b.m[2][1]=1;
    matran res;
    res.init();
    while(n){
        if(n%2) res=res*b;
        b=b*b;
        n/=2;
    }
    return res.m[1][2];
}
int main(){
    faster();
    run(){
        ll n; cin>>n;
        cout<<solve(n)<<endl;
    }
}