#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define run() int t; cin>>t; while(t--)
#define ll long long
#define MOD (ll) 1000000007
ll pow(ll a,ll b){
    if(b==0) return 1;
    if(b==1) return a%MOD;
    ll x= pow(a,b/2);
    if(b%2==0) return (x*x)%MOD;
    else return (((x*x)%MOD)*a) % MOD;
}
int main(){
    faster();
    while(1){
        ll a,b; cin>>a>>b;
        if(a==0 && b==0) break;
        cout<<pow(a,b)<<endl;
    }
}