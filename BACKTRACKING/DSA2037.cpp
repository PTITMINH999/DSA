#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define run() int t; cin>>t; while(t--)
#define ll long long
int n,a[20];
vector<bool> prime(1505,1);
vector<int> tmp;
vector<vector<int>> ans;
void era(){
    prime[0]=prime[1]=0;
    for(int i=2;i<=sqrt(1500);i++){
        if(prime[i]){
            for(int j=i*i;j<=1500;j+=i){
                prime[j]=0;
            }
        }
    }
} 
void Try(int i,int sum){
    if(prime[sum]) ans.push_back(tmp);
    for(int j=i;j<=n;j++){
        tmp.push_back(a[j]);
        Try(j+1,sum+a[j]);
        tmp.pop_back();
    }
}
int main(){
    faster();
    era();
    run(){
        cin>>n;
        for(int i=1;i<=n;i++) cin>>a[i];
        sort(a+1,a+n+1,greater<>());
        tmp.clear();ans.clear();
        Try(1,0);
        sort(ans.begin(),ans.end());
        for(vector<int> &it:ans){
            for(int x:it) cout<<x<<" ";
            cout<<endl;
        }
    }
}