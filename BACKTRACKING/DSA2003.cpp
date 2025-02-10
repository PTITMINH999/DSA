#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define run() int t; cin>>t; while(t--)
int n,a[15][15];
vector<string> res;
void Try(int i,int j, string s){
    if(i==n && j==n){
       res.push_back(s);
        return;
    }
    if(i<n && a[i+1][j]==1) Try(i+1,j,s+"D");
    if(j<n && a[i][j+1]==1) Try(i,j+1,s+"R"); 
}
int main(){
    faster();
    run(){
        cin>>n;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                cin>>a[i][j];
            }
        }
        res.clear();
        if(a[1][1]==1) Try(1,1,"");
        if(res.empty()) cout<<-1<<endl;
        else{
            for(int i=0;i<res.size();i++)
                cout<<res[i]<<" ";
            cout<<endl;
        }
    }
}