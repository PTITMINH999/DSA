#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define run() int t; cin>>t; while(t--)
#define ll long long
ll a[505];// dùng để lưu bội
vector<ll> ans;
bool ok=0;
void sinh(string &s){
    int i=s.length()-1;
    while(i>=0 && s[i]=='9'){
        s[i]='0';
        i--;
    }
    if(i==-1) ok=1;
    else s[i]='9';
}
int main(){
    faster();
    string s(15,'0');
    ok=0;
    sinh(s);// loại 00000
    while(!ok){
        ans.push_back(stoll(s));
        sinh(s);
    }
    for(int i=1;i<=500;i++){
        for(ll x:ans){
            if(a[i]==0 && x%i==0){
                a[i]=x;
            }
        }
    }
    run(){
        int n;cin>>n;
        cout<<a[n]<<endl;
    }
}