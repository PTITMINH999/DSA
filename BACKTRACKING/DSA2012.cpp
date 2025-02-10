#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define run() int t; cin>>t; while(t--)
int m,n,a[105][105],res;
void Try(int i,int j){
    if(i==m && j==n){
        res++;
        return;
    }
    if(i<m) Try(i+1,j);
    if(j<n) Try(i,j+1);
}
int main(){
    faster();
    run(){
        cin>>m>>n;
        for(int i=1;i<=m;i++)
            for(int j=1;j<=n;j++)
                cin>>a[i][j];
        res=0;
        Try(1,1);
        cout<<res<<endl;
    }
}