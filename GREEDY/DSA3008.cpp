#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define run() int t; cin>>t; while(t--)
#define ll long long
int main(){
    faster();
    run(){
        int n; cin>>n;
        pair<int,int> a[n];
        for(int i=0;i<n;i++) cin>>a[i].second;
        for(int i=0;i<n;i++) cin>>a[i].first;
        sort(a,a+n);
        int ans=0,end=0;
        for(int i=0;i<n;i++){
            if(a[i].second>=end){
                ans++;
                end=a[i].first;
            }
        }
        cout<<ans<<endl;
    }
}