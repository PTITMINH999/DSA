#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define run() int t; cin>>t; while(t--)
int n,k, a[1005];
void pre(){
    int i=k;
    while(i>=1 && a[i-1]+1==a[i]) i--;
    bool ok=0;
    for(int i=1;i<=k;i++){
        if(a[i]!=i){
            ok=1; break;
        }
    }
    if(!ok){
        for(int i=1;i<=k;i++) cout<<n-k+i<<" ";
    }
    if(i){
        a[i]--;
        for(int j=i+1;j<=k;j++) a[j]=n-k+j;
        for(int i=1;i<=k;i++) cout<<a[i]<<" ";
    }
}
int main(){
    faster();
    run(){
        cin>>n>>k;
        for(int i=1;i<=k;i++) cin>>a[i];
        pre();
        cout<<endl;
    }
}