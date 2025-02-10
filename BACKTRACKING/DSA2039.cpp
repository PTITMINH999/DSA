#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define run() int t; cin>>t; while(t--)
#define ll long long
vector<int> v;
vector<vector<int>> ans;
void Try(int n,int x){
    if(n<0) return;
    if(n==0) ans.push_back(v);
    for(int j=x;j>=1;j--){
        v.push_back(j);
        Try(n-j,j);
        v.pop_back();
    }
}
int main(){
    faster();
    run(){
        int n;cin>>n;
        v.clear();ans.clear();
        Try(n,n);
        sort(ans.begin(),ans.end(),greater<>());
        cout<<ans.size()<<endl;
        for(vector<int> it:ans){
            cout<<"(";
            for(int i=0;i<it.size()-1;i++) cout<<it[i]<<" ";
            cout<<it[it.size()-1]<<") ";
        }
        cout<<endl;
    }
}