#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define run() int t; cin>>t; while(t--)
int n,k, x[1005];
void next(){
    int i=k;
    while(i>=1 && x[i]==n-k+i){
        --i;
    }
    if(i==0){
        for(int i=1;i<=k;i++) cout<<i<<" ";
    }
    else{
        x[i]++;
        for(int j=i+1;j<=k;j++){
            x[j]=x[j-1]+1;
        }
        for(int i=1;i<=k;i++) cout<<x[i]<<" ";
    }
}
int main(){
    faster();
    run(){
        cin>>n>>k;
        for(int i=1;i<=k;i++) cin>>x[i];
        next();
        cout<<endl;
    }
}