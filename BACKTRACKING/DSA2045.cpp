#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define run() int t; cin>>t; while(t--)
#define ll long long
int n;
string s;
void Try(int pre,string a){
    for(int j=pre+1;j<n;j++){
        cout<<a+s[j]<<" ";
        Try(j,a+s[j]);
    }
}
int main(){
    faster();
    run(){
        cin>>n>>s;
        Try(-1,"");
        cout<<endl;
    }
}