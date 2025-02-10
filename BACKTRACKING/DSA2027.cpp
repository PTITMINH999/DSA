#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define run() int t; cin>>t; while(t--)
#define ll long long
int n,a[20][20],res=INT_MAX,cmin=INT_MAX;
bool visited[20];
void Try(int i,int sum,int cnt){
    if(sum>res) return;
    if(cnt==n){
        res=min(res,sum+a[i][1]);
        return;
    }
    for(int j=1;j<=n;j++){
        if(!visited[j]){
            visited[j]=1;
            if(sum+(n-cnt+1)*cmin<res){
                Try(j,sum+a[i][j],cnt+1);
            }
            visited[j]=0;
        }
    }
}
int main(){
    faster();
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
            if(a[i][j]!=0){
                cmin=min(cmin,a[i][j]);
            }
        }
    }
    visited[1]=1;
    Try(1,0,1);
    cout<<res;
}