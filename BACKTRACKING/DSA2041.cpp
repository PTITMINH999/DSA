#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define run() int t; cin>>t; while(t--)
#define ll long long
int bfs(int n){
    queue<pair<int,int>> q;
    q.push({n,0});
    while(q.size()){
        int s=q.front().first;
        int cnt=q.front().second;
        q.pop();
        if(s==1) return cnt;
        if(s%3==0) q.push({s/3,cnt+1});
        if(s%2==0) q.push({s/2,cnt+1});
        q.push({s-1,cnt+1});
    }
}
int main(){
    faster();
    run(){
        int n;cin>>n;
        cout<<bfs(n)<<endl;
    }
}