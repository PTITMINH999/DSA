#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define run() int t; cin>>t; while(t--)
#define ll long long
int main(){
    faster();
    run(){
        int n;cin>>n;
        int a[n];
        for(int &x:a) cin>>x;
        int ans=INT_MIN,sum=0;
        for(int i=0;i<n;i++){
            sum=max(sum+a[i],a[i]);
            ans=max(ans,sum);
        }
        cout<<ans<<endl;
    }
}