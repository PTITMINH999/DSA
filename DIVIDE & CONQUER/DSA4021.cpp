#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define run() int t; cin>>t; while(t--)
#define ll long long
int main(){
    faster();

    ll int f[93];
    f[1]=f[2]=1;
    for(int i=3;i<93;i++) f[i]=f[i-1]+f[i-2];

    run(){
        ll n,k;
        cin>>n>>k;
        while(n>2){
            if(k > f[n-2]){
                k-=f[n-2];
                --n;
            }
            else n-=2;
        }
        string s[4];
        s[1]="0";
        s[2]="1";
        cout<<s[n][k-1]<<endl;
    }
    return 0;
}