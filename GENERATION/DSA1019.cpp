#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define run() int t; cin>>t; while(t--)
int n, a[1000];
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
bool solve(){
    if(a[1]==0 || a[n]==1) return false;
    for(int i=1;i<=n-1;i++){
        if(a[i]==1 && a[i+1]==1)
            return false;
    }
    return true;
}
int main(){
    faster();
    run(){
        cin>>n;
        init();
        ok=0;
        while(!ok){
            if(solve()){
                for(int i=1;i<=n;i++){
                    if(a[i]) cout<<"H";
                    else cout<<"A";
                }
                cout<<endl;
            }
            sinh();
        }
    }
}