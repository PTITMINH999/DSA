#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define run() int t; cin>>t; while(t--)
int n,m,p,s;
vector<bool> check(205,1);
vector<int> a,x;
vector<vector<int>> res;
void era(){
    for(int i=2;i<=200;i++){
        if(check[i]){
            a.push_back(i);
            for(int j=i*i;j<=200;j+=i){
                check[j]=0;
            }
        }
    }
    m=a.size()-1;
}
void Try(int i,int pos,int sum){
    for(int j=pos+1;j<=m;j++){
        if(a[j]<=p) continue;
        if(i==n && sum+a[j]==s){
            x.push_back(a[j]);
            res.push_back(x);
            x.pop_back();
        }
        else if(i<n && sum+a[j]<s){
            x.push_back(a[j]);
            Try(i+1,j,sum+a[j]);
            x.pop_back();
        }
     }
}
int main(){
    faster();
    era();
    run(){
        cin>>n>>p>>s;
        res.clear();
        Try(1,0,0);
        cout<<res.size()<<endl;
        for(int i=0;i<res.size();i++){
            for(int j=0;j<res[i].size();j++){
                cout<<res[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}