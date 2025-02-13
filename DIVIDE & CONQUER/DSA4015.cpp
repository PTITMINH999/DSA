#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define run() int t; cin>>t; while(t--)
#define ll long long
int main(){
    faster();
    run(){
        ll n,x;
        cin>>n>>x;
        vector<ll> a(n);
        for(ll &i:a) cin>>i;
        int it = lower_bound(a.begin(),a.end(),x)-a.begin();
        if(a[it]!=x) it--;
        if(it>0) cout<<it+1<<endl;
        else cout<<-1<<endl;
    }
}