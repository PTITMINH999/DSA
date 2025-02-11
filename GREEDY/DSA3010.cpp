#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define run() int t; cin>>t; while(t--)
#define ll long long
int main(){
    faster();
    run(){
        int n; cin>>n;
        priority_queue<ll,vector<ll>,greater<ll>> pq;
        while(n--){
            ll x; cin>>x;
            pq.push(x);
        }
        ll ans=0;
        while(pq.size()>1){
            ll a=pq.top();pq.pop();
            ll b=pq.top();pq.pop();
            ans+=(a+b);
            pq.push(a+b);
        }
        cout<<ans<<endl;
    }
}