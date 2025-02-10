#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define run() int t; cin>>t; while(t--)
void next(string s){
    int i=s.size()-1;
    while(i>=0 && s[i]=='1'){
        s[i]='0';
        --i;
    }
    if(i!=-1) s[i]='1';
    cout<<s<<endl;
}
int main(){
    faster();
    run(){
        string s; cin>>s;
        next(s);
    }
}