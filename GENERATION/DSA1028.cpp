#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define run() int t; cin>>t; while(t--)
int n,k;
vector<int>v(1,0),a;
void in(){
    for(int i=1;i<=k;i++) cout<<v[a[i]]<<' ';
    cout<<endl;
}
void Try(int i){
    for(int j=a[i-1]+1;j<=n-k+i;j++){
        a[i]=j;
        if(i==k) in();
        else Try(i+1);
    }
}
int main(){
    faster();
    cin>>n>>k;
    bool c[1005]={};
    int x;
    for(int i=1;i<=n;i++){
        cin>>x;
        if(!c[x]){
            v.push_back(x);
            c[x]=1;
        }
    }
    sort(v.begin(),v.end());
    n=v.size()-1;
    a.resize(v.size());
    Try(1);
}