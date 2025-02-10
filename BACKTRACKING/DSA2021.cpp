#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define run() int t; cin>>t; while(t--)
#define ll long long
char Try(ll k, string s,ll n){
    if(k<s.size()) return s[k];
    if(k<n/2) return Try(k,s,n/2);
    if(k==n/2) return Try(k-1,s,n/2);
    if(k>n/2) return Try(k-n/2-1,s,n/2);
}
int  main(){
    faster();
    run(){
        string s;cin>>s;
        ll k;
        cin>>k;
        k--;
        ll n=s.size();
        while(n<=k) n*=2;
        cout<<Try(k,s,n)<<endl;
    }
}