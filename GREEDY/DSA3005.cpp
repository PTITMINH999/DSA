#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define run() int t; cin>>t; while(t--)
#define ll long long
int main(){
    faster();
    run(){
        int n,k; cin>>n>>k;
        int a[n];
        for(int &x:a) cin>>x;
        sort(a,a+n);
        int ans=0;
        if(k<n-k){
            for(int i=0;i<k;i++) ans-=a[i];
            for(int i=k;i<n;i++) ans+=a[i];
        }
        else{
            for(int i=0;i<n-k;i++) ans-=a[i];
            for(int i=n-k;i<n;i++) ans+=a[i];
        }
        cout<<ans<<endl;
    }
}