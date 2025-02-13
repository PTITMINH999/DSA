#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define run() int t; cin>>t; while(t--)
#define ll long long
// k trong dãy n
//k==mid trả về n
// k>mid --> n--; lấy đx;
// k<mid --> n--; ko lấy đx;
// mid=2^(n-1);
ll find(ll n,ll k){
    ll m=pow(2,n-1);
    if(k==m) return n;
    if(k>m) return find(n-1,m*2-k);
    return find(n-1,k);
}
int main(){
    faster();
    run(){
        ll n,k;cin>>n>>k;
        cout<<find(n,k)<<endl;
    }
}