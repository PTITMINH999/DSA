#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define run() int t; cin>>t; while(t--)
#define ll long long
int n,x,a[25];
vector<int> tmp; 
vector<string> ans;
void in(){
    string s="{";
    for(int i=0;i<tmp.size()-1;i++) s+=to_string(tmp[i])+" ";
    s+=to_string(tmp[tmp.size()-1])+"}";
    ans.push_back(s);
}
void Try(int pre,int sum){
    if(sum>x) return;
    if(sum==x){
        in();
        return;
    }
    for(int j=pre;j<=n;j++){
        tmp.push_back(a[j]);
        Try(j,sum+a[j]);
        // backtrack
        tmp.pop_back();
    }
}
int main(){
    faster();
    run(){
        cin>>n>>x;
        for(int i=1;i<=n;i++) cin>>a[i];
        sort(a+1,a+n+1);
        tmp.clear();ans.clear();
        Try(1,0);
        if(ans.empty()) cout<<-1;
        else cout<<ans.size()<<" ";
        for(string x:ans) cout<<x<<" ";
        cout<<endl;
    }
}