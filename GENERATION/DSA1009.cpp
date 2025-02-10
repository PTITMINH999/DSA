#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define run() int t; cin>>t; while(t--)
int n,k,a[1005];
bool ok=0;
void init(){
    for(int i=1;i<=n;i++) a[i]=0;
}
void sinh(){
    int i=n;
    while(i>=1 && a[i]==1){
        a[i]=0;
        --i;
    }
    if(i==0) ok=1;
    else a[i]=1;
}
bool check(){
    int d=0,res=0;
    for(int i=1;i<=n;i++){
        if(a[i]==0) d++;
        else d=0;
        if(d > k) return false;
        if(d==k) ++res;
    }
    return res==1;
}
int main(){
    faster();
    cin>>n>>k;
    vector<vector<int>> v;
    ok=0;
    init();
    while(!ok){
        if(check()){
            vector<int> b(a+1,a+n+1);
            v.push_back(b);
        }
        sinh();
    }
    cout<<v.size()<<endl;
    for(auto it:v){
        for(int x:it){
            if(x==1) cout<<"B";
            else cout<<"A";
        }
        cout<<endl;
    }
}