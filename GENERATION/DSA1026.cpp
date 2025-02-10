#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define run() int t; cin>>t; while(t--)
// 8:1, 6:0
int n,a[1001];
bool ok=0;
void init(){
    for(int i=1;i<=n;i++) a[i]=0;
}
void sinh(){
    int i=n;
    while(i>=1 && a[i]==1){
        a[i]=0;
        i--;
    }
    if(i==0) ok=1;
    else a[i]=1;
}
bool check(){
    if(n<6) return false;
    if(a[1]==0 || a[n]==1) return false;
    int s=0,res=0;
    for(int i=1;i<=n-1;i++){
        if(a[i]==1 && a[i+1]==1)
            return false;
    }
    for(int i=1;i<=n;i++){
        if(a[i]==0) s++;
        else s=0;
        if(s>3) return false;
    }
    return true;
}
int main(){
    faster();
    cin>>n;
    ok=0;
    while(!ok){
        if(check()){
            for(int i=1;i<=n;i++){
                if(a[i]==1) cout<<"8";
                else cout<<"6";
            }
            cout<<endl;
        }
        sinh();
    }
}