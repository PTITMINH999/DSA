#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define run() int t; cin>>t; while(t--)
int min(string s){
    int res=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='6') s[i]='5';
        res=res*10+s[i]-'0';
    }
    return res;
}
int max(string s){
    int res=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='5') s[i]='6';
        res=res*10+s[i]-'0';
    }
    return res;
}
int main(){
    faster();
    string a,b; cin>>a>>b;
    cout<<min(a)+min(b)<<" "<<max(a)+max(b);
}