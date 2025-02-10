#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define run() int t; cin>>t; while(t--)
int n,a[15][15];
bool check;
int dx[4]={1,0,0,-1};
int dy[4]={0,-1,1,0};
string ds[4]={"D","L","R","U"};
void Try(int i,int j,string s){
    //if(a[i][j]==0) return ;
    if(i==n && j==n){
        cout<<s<<" ";
        check=1;
        return;
    }
    for(int k=0;k<4;k++){
        int u=i+dx[k];
        int v=j+dy[k];
        if(u>=1 && u<=n && v>=1 && v<=n && a[u][v]==1){
            a[u][v]=0;// đánh dấu điểm đó đã đc đi qua trong Try hiện tại
            Try(u,v,s+ds[k]);
            a[u][v]=1;// trả lại giá trị cũ cho những lần quay lui tiếp theo
        }
    }
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
        check=0;
        if(a[1][1]==1){
            a[1][1]=0;
            Try(1,1,"");
        }
        if(!check) cout<<-1;
        cout<<endl;
    }
}