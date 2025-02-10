#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define run() int t; cin>>t; while(t--)
#define ll long long
int n,k,a[20],tong,res;
// cnt: số nhóm 
void Try(int i,int s,int x,int cnt){
    if(cnt==k && i==n){
        res++;
        return;
    }
    for(int j=i+1;j<=n;j++){
        s+=a[j];
        if(s==x) Try(j,0,x,cnt+1);
    }
}
int main(){
    faster();
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        tong+=a[i];
    }
    if(tong%k!=0) cout<<0;
    else{
        Try(0,0,tong/k,0);
        cout<<res;
    }
}