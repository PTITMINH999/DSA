#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define run() int t; cin>>t; while(t--)
#define ll long long
int a[1001],b[1001],n;
bool solve(){
    bool check=0;
    for(int i=1;i<n;i++){
        if(a[i-1]/b[i-1] != a[i]/b[i]){
            check=1;
            while(a[i-1]/b[i-1]!=a[i]/b[i]){
                if(a[i-1]/b[i-1] > a[i]/b[i]) b[i-1]++;
                else b[i]++;
            }
        }
    }
    return check;
}
int main(){
    faster();
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) b[i]=1;
    while(solve());
    ll ans=0;
    for(int x:b) ans+=x;
    cout<<ans;
}