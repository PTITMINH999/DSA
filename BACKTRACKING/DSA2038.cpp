#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define run() int t; cin>>t; while(t--)
#define ll long long
int n,k,a[20],x[20];
void in(){
    for(int i=1;i<=k;i++) cout<<a[x[i]]<<" ";
    cout<<endl;
}
void Try(int i){
    for(int j=x[i-1]+1;j<=n-k+i;j++){
        x[i]=j;
        if(i==k) in();
        else Try(i+1);
    }
}
int main(){
    faster();
    run(){
        cin>>n>>k;
        for(int i=1;i<=n;i++) cin>>a[i];
        sort(a+1,a+n+1);
        Try(1);
    }
}