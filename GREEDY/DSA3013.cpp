#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define run() int t; cin>>t; while(t--)
#define ll long long
/*
k là sô lần xuất hiện của kí tự xuất hiện nhiều nhất
(n-k)/(d-1) : tổng quát, chia khoảng cách
*/
int main(){
    faster();
    run(){
        int d; cin>>d;
        string s ;cin>>s;
        map<char,int> mp;
        for(char c:s) mp[c]++;
        int k=0,n=s.size();
        for(auto it:mp) k=max(k,it.second);
        if(k - (n-k)/(d-1)<2) cout<<1<<endl;
        else cout<<-1<<endl;
    }
}