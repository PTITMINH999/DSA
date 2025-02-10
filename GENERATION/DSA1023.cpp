#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define run() int t; cin>>t; while(t--)
int n,k;
vector<int> a,v;
int cnt=0,ok=0;
bool check(){
    return a==v;
}
void Try(int i){
    if(ok) return;
    for(int j=v[i-1]+1;j<=n-k+i;j++){
        v[i]=j;
        if(i==k){
            cnt++;
            if(check()){
                ok=1;
                return;
            }
        }
        else Try(i+1);
        if(ok) return;
    }
}
int main(){
    faster();
    run(){
        ok=0;cnt=0;
        cin>>n>>k;
        a.resize(n+1);
        v.resize(n+1);
        for(int i=1;i<=k;i++) cin>>a[i];
        Try(1);
        cout<<cnt<<endl;
    }
}