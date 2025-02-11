#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define run() int t; cin>>t; while(t--)
#define ll long long
int main(){
    faster();
    run(){
        int n;
        cin>>n;
        int a[n];
        for(int &x:a) cin>>x;
        int l,r;
        if(a[0]>a[n-1]) swap(a[0],a[n-1]);
        l=1,r=n-2;
        while(l<r){
            if(a[l]>a[r]) swap(a[l],a[r]);
            if(a[l-1]>a[l] || a[r]>a[r+1]) break;
            l++;r--;
        }
        if(l<r) cout<<"No\n";
        else cout<<"Yes\n";
    }
}