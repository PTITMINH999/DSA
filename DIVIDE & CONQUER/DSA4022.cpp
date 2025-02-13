#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define run() int t; cin>>t; while(t--)
#define ll long long
ll lt(ll a,ll b){
    if(b==0) return 1;
    if(b==1) return a;
    ll x=lt(a,b/2);
    if(b%2==0) return x*x;
    else return (x*x*a); 
}
char find(ll n,ll k){
    ll m=lt(2,n-1);
    if(k==m) return n+'A'-1;
    else if(k>m) return find(n-1,m*2-k);
    return find(n-1,k);
}
int main(){
    faster();
    run(){
        ll n,k;
        cin>>n>>k;
        cout<<find(n,k)<<endl;
    }
}
