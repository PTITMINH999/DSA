#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define run() int t; cin>>t; while(t--)
int n,m,ans;
bool check[20][20];
vector<int> a[20];
void Try(int pos,int s){
    ans=max(ans,s);
    for(int u:a[pos]){
        if(!check[u][pos]){
            check[u][pos]=check[pos][u]=1;
            Try(u,s+1);
            // backtrack
            check[u][pos]=check[pos][u]=0;
        }
    }
}
int main(){
    faster();
    run(){
        ans=0;
        memset(check,false,sizeof(check));
        for(int i=0;i<20;i++) a[i].clear();
        cin>>n>>m;
        for(int i=0;i<m;i++){
            int x,y;cin>>x>>y;
            a[x].push_back(y);
            a[y].push_back(x);
        }
        for(int i=0;i<n;i++){
            Try(i,0);
        }
        cout<<ans<<endl;
    }
}