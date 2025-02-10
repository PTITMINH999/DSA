#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define run() int t; cin>>t; while(t--)
int main(){
    faster();
    run(){
        string s; cin>>s;
        for(int i=1;i<s.size();i++){
            s[i]=((s[i]-'0') ^ (s[i-1]-'0'))+'0';
        }
        cout<<s<<endl;
    }
}