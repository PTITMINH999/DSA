#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define run() int t; cin>>t; while(t--)
#define ll long long
int main(){
    faster();
    run(){
        int k; cin>>k;
        string s; cin>>s;
        int mp[256]={};
        for(char &c:s) mp[c]++;
        priority_queue<int,vector<int>> pq;
        for(int x:mp){
            if(x) pq.push(x);
        }
        while(k--){
            int a=pq.top(); pq.pop();
            a--;
            if(a>0) pq.push(a);
        }
        ll res=0;
        while(!pq.empty()){
            res+=pow(pq.top(),2);
            pq.pop();
        }
        cout<<res<<endl;
    }
}