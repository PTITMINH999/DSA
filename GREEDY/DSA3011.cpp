#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define run() int t; cin>>t; while(t--)
#define ll long long
const ll MOD=1e9+7;
int main(){
    faster();
    run(){
        int n; cin>>n;
        priority_queue<ll,vector<ll>,greater<ll>> pq;
        while(n--){
            ll x; cin>>x;
            pq.push(x);
        }
        ll res=0,tmp=0;
        while(pq.size()>1){
            ll a=pq.top();pq.pop();
            ll b=pq.top();pq.pop();
            tmp=a+b;
            if(tmp>=MOD) tmp-=MOD;
            res+=tmp;
            if(res>=MOD) res-=MOD;
            pq.push(tmp);
        }
        cout<<res<<endl;
    }
}