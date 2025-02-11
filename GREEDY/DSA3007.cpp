#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define run() int t; cin>>t; while(t--)
#define ll long long
int main(){
    faster();
    run(){
        int n; cin>>n;
        ll a[n],b[n];
        for(ll &x:a) cin>>x;
        for(ll &x:b) cin>>x;
        sort(a,a+n);
        sort(b,b+n,greater<ll>());
        ll res=0;
        for(int i=0;i<n;i++){
            res+=a[i]*b[i];
        }
        cout<<res<<endl;
    }
}