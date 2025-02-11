#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define run() int t; cin>>t; while(t--)
#define ll long long
vector<ll> v;
string solve(string s){
    string tmp;
    for(ll &x:v){
        tmp=to_string(x);
        int idx=0;
        for(char &c:s){
            if(c==tmp[idx]) idx++;
        }
        if(idx==tmp.size()) return tmp;
    }
    return "-1";
}
int main(){
    faster();
    for(int i=1e2;i>=1;i--) v.push_back(i*i*i);
    run(){
        string s;
        cin>>s;
        cout<<solve(s)<<endl;
    }
}