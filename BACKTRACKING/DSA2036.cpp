#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define run() int t; cin>>t; while(t--)
#define ll long long
int n,a[20];
vector<int> tmp;
vector<vector<int>> ans;
void Try(int i,int sum){
    if(sum%2==1) ans.push_back(tmp);
    for(int j=i;j<=n;j++){
        tmp.push_back(a[j]);
        Try(j+1,sum+a[j]);
        tmp.pop_back();
    }
}
int main(){
    faster();
    run(){
        cin>>n;
        for(int i=1;i<=n;i++) cin>>a[i];
        sort(a+1,a+n+1,greater<>());
        tmp.clear();
        ans.clear();
        Try(1,0);
        sort(ans.begin(),ans.end());
        for(int i=0;i<ans.size();i++){
            for(int x:ans[i]) cout<<x<<" ";
            cout<<endl;
        }
    }
}