#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define run() int t; cin>>t; while(t--)
int main(){
    faster();
    int n; cin>>n;
    int a[n+1],dp[n+1]={};
    for(int i=1;i<=n;i++) cin>>a[i];
    int res=1;
    for(int i=1;i<=n;i++){
        dp[a[i]] = dp[a[i]-1]+1;
        res=max(res,dp[a[i]]);
    }
    cout<<n-res;
}