#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define run() int t; cin>>t; while(t--)
void sinh(string s){
    int i=s.length()-2;
    while(i>=0 && s[i]>=s[i+1]){
        i--;
    }
    if(i==-1) cout<<"BIGGEST\n";
    else{
        int j=s.length()-1;
        while(s[i]>=s[j]) j--;
        swap(s[i],s[j]);
        reverse(s.begin()+i+1,s.end());
        cout<<s<<endl;
    }
}
int main(){
    faster();
    run(){
        int tc; cin>>tc;
        string s; cin>>s;
        cout<<tc<<" ";
        sinh(s);
    }
}