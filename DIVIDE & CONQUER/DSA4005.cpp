#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define run() int t; cin>>t; while(t--)
#define ll long long
/*
A
B
AB
BAB
ABBAB
BABABBAB
*/
ll fi[93];
char find(ll n,ll k){
    if(n==1) return 'A';
    if(n==2) return 'B';
    if(k>fi[n-2]) return find(n-1,k-fi[n-2]);// k ở f[n-1]
    return find(n-2,k);// k ở f[n-2]
}
int main(){
    faster();
    fi[1]=fi[2]=1;
    for(int i=3;i<=93;i++){
        fi[i]=fi[i-2]+fi[i-1];
    }
    run(){
        ll n,k;cin>>n>>k;
        cout<<find(n,k)<<endl;
    }
}