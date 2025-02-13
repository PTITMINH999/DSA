#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define run() int t; cin>>t; while(t--)
#define ll long long
int main(){
    faster();
    run(){
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int &x:a) cin>>x;
        sort(a,a+n);
        ll res=0;
        for(int i=0;i<n;i++){
            res+=lower_bound(a+i,a+n,a[i]+k)-a-i-1;
        }
        cout<<res<<endl;
    }
}