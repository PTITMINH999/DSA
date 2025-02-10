#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define run() int t; cin>>t; while(t--)
int m,n,k;
char a[5][5];
bool check[5][5];
int dx[8]={-1,-1,-1,0,0,1,1,1};
int dy[8]={-1,0,1,-1,1,-1,0,1};
set<string> dic;
vector<string> res;
void bfs(int i,int j,string s){
    if(dic.find(s)!=dic.end()){
        res.push_back(s);
    }
    for(int k=0;k<8;k++){
        int u=i+dx[k];
        int v=j+dy[k];
        if(u>=0 && u<m && v>=0 && v<n && !check[u][v]){
            check[u][v]=1;
            bfs(u,v,s+a[u][v]);
            check[u][v]=0;
        }
    }
}
int main(){
    faster();
    run(){
        cin>>k>>m>>n;
        dic.clear();res.clear();
        while(k--){
            string c;cin>>c;
            dic.insert(c);
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
            }
        }
        //memset(check,false,sizeof(check));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                memset(check,false,sizeof(check));
                check[i][j]=1;
                string s="";
                bfs(i,j,s+a[i][j]);
            }
        }
        if(res.empty()) cout<<-1;
        else{
            for(string it:res) cout<<it<<" ";
        }
        cout<<endl;
    }
}