#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define run() int t; cin>>t; while(t--)
#define ll long long
int main(){
    faster();
    run(){
        int n,m;
        cin>>n>>m;
        int a[n],b[m];
        for(int &x:a) cin>>x;
        for(int &x:b) cin>>x;
        int c[n+m-1]={};
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                c[i+j]+=a[i]*b[j];
            }
        }
        for(int x:c) cout<<x<<" ";
        cout<<endl;
    }
}