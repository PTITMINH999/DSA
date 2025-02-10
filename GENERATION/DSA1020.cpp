#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define run() int t; cin>>t; while(t--)
void next(string &s){
    int i=s.length()-1;
    while(i>=0 && s[i]=='0'){
        s[i]='1';
        --i;
    }
    if(i<0) for(int i=0;i<s.size();i++) cout<<1;
    else{
        s[i]='0';
        cout<<s;
    }
}
int main(){
    faster();
    run(){
        string x; cin>>x;
        next(x);
        cout<<endl;
    }
}