#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define run() int t; cin>>t; while(t--)
#define ll long long
int A[]={2,3,5,7,11,13,17,19,23,29};
ll res;
int n;
void Try(int i,ll x,ll uoc){
    if(uoc>n) return;
    if(uoc==n) res=min(res,x);
    for(int j=1;;j++){
        if(x*A[i]>res) break;
        x*=A[i];
        Try(i+1,x,uoc*(j+1));
    }
}
int main(){
    faster();
    run(){
        cin>>n;
        res=1e18;
        Try(0,1,1);
        cout<<res<<endl;
    }
}