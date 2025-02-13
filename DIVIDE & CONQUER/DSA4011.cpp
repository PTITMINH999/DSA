#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define run() int t; cin>>t; while(t--)
#define ll long long
ll todecimal(string s,int k){
    ll res=0;
    for(char x:s){
        res=res*k+x-'0';
    }
    return res;
}
int main(){
    faster();
    run(){
        string a,b; cin>>a>>b;
        cout<<todecimal(a,2)*todecimal(b,2)<<endl;
    }
}