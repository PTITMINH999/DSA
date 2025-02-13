#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define run() int t; cin>>t; while(t--)
#define ll long long
int bsearch(vector<ll> &a,vector<ll> &b){
    int l =0 ,r = a.size()-2,mid,res;
    while(l<=r){
        mid = (l+r)/2;
        if(a[mid] != b[mid]){
            res=mid;
            r=mid-1;
        }
        else l = mid+1;
    }
    return res;
}
int main(){
    faster();
    run(){
        int n;cin>>n;
        vector<ll> a(n);
        vector<ll> b(n-1);    
        map<ll,int> mp;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n-1;i++){
            cin>>b[i];
        }
        if(a[0]!=b[0]) cout<<1<<endl;
        else if(a.back() != b.back()) cout<<n<<endl;
        else cout<<bsearch(a,b) +1 <<endl;
    }
}