#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define run() int t; cin>>t; while(t--)
int n,k,a[1001],b[1001],cnt;
void print(int m){
    for(int i=1;i<=m;i++){
        if(b[i]) cout<<a[i]<<" ";
    }
    cout<<endl;
    cnt++;
}
void tryat(int i,int presum){
    for(int j=0;j<=1;j++){
        b[i]=j;
        if(presum+a[i]*j==k) print(i);
        else if(i<n) tryat(i+1,presum + a[i]*j);
    }
}
int main(){
    faster();
    cin>>n>>k;
    for(int i=1;i<=n;i++) cin>>a[i];
    tryat(1,0);
    cout<<cnt;
}