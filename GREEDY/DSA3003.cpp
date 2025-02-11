#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define run() int t; cin>>t; while(t--)
#define ll long long
const ll mod=1e9+7;
int main(){
    faster();
    run(){
        int n;cin>>n;
        int a[n];
        for(int &x:a) cin>>x;
        sort(a,a+n);
        ll sum=0;
        for(int i=0;i<n;i++){
            sum+= 1ll*a[i]*i;
            sum%=mod;
        }
        cout<<sum<<endl;
    }
}