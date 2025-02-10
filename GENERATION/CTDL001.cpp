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
bool check(){
    int l=1,r=n;
    while(l<r){
        if(a[l]!=a[r]) return false;
        l++;r--;
    }
    return true;
}
int main(){
    cin>>n;
    init();
    ok=0;
    while(!ok){
        if(check()){
            for(int i=1;i<=n;i++)
                cout<<a[i]<<" ";
            cout<<endl;
        }
        sinh();
    }
}