#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define run() int t; cin>>t; while(t--)
#define ll long long
// k: sô lần xuất hiện của kí tự xh nhiều nhất
// a_a_a
// k-(n-k)<2 , (n-k): số khoảng trống tối đa giữa các kí tự giống nhau
int main(){
    faster();
    run(){
        string s; cin>>s;
        map<char,int> m;
        for(char c:s) m[c]++;
        int k=0;
        for(auto it:m) k=max(k,it.second);
        int n=s.size();
        if(2*k-n<=1) cout<<1<<endl;
        else cout<<-1<<endl;
    }
}