#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define run() int t; cin>>t; while(t--)
#define ll long long
ll merge(ll a[],ll l,ll m,ll r){
    vector<ll> x(a+l,a+m+1);
    vector<ll> y(a+m+1,a+r+1);
    ll i=0,j=0;
    ll cnt=0;
    while(i< x.size() && j<y.size()){
        if(x[i]<=y[j]){
            a[l]=x[i];
            l++;i++;
        }
        else{
            cnt+=x.size()-i;
            a[l]=y[j];
            l++;j++;
        }
    }
    while(i<x.size()){
        a[l]=x[i];
        l++;i++;
    }
    while(j<y.size()){
        a[l]=y[j];
        l++;j++;
    }
    return cnt;
}
ll mergesort(ll a[],ll l,ll r){
    ll res=0;
    if(l<r){
        ll m=(l+r)/2;
        res+=mergesort(a,l,m);
        res+=mergesort(a,m+1,r);
        res+=merge(a,l,m,r);
    }
    return res;
}
int main(){
    faster();
    run(){
        ll n; cin>>n;
        ll a[n];
        for(ll &x:a) cin>>x;
        cout<<mergesort(a,0,n-1)<<endl;
    }
}