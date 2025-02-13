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
        int it=lower_bound(a,a+n,k)-a;
        if(a[it]==k) cout<<it+1<<endl;
        else cout<<"NO\n";
    }
}