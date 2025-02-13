#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define run() int t; cin>>t; while(t--)
#define ll long long
#define mod (ll) 123456789
// 2^(n-1)
ll dem(ll n){
    if(n==1) return 2;
    ll x=dem(n/2);
    if(n%2==0) return (x*x)%mod;
    else return (((x*x)%mod)*2)%mod;     
}
int main(){
    faster();
    run(){
        ll n;cin>>n;
        cout<<dem(n-1)<<endl;
    }
}