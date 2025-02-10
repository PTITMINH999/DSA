#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define run() int t; cin>>t; while(t--)
string s;
int a[1000],used[1000];
void in(){
    for(int i=0;i<s.size();i++) cout<<s[a[i]];
    cout<<" ";
}
void Try(int i){
    for(int j=0;j<s.size();j++){
        if(used[j]==0){
            a[i]=j;
            used[j]=1;
            if(i==s.size()-1) in();
            else Try(i+1);
            used[j]=0;
        }
    }
}
int main(){
    faster();
    run(){
        cin>>s;
        Try(0);
        cout<<endl;
    }
}