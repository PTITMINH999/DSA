#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define run() int t; cin>>t; while(t--)
#define ll long long
int main(){
    faster();
    run(){
        int m,n,k;
        cin>>m>>n>>k;
        int a[m],b[n];
        for(int i=0;i<m;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];
        vector<int> res;
        int i=0,j=0;
        while(i<m && j<n){
            if(a[i]<b[j]) res.push_back(a[i++]);
            else res.push_back(b[j++]);
        }
        while(i<m) res.push_back(a[i++]);
        while(j<n) res.push_back(b[j++]);
        cout<<res[k-1]<<endl;
    }
}