#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define run() int t; cin>>t; while(t--)
int n,k,a[1001];
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
    int s=0;
    for(int i=1;i<=n;i++) s+=a[i];
    return s==k;
}
int main(){
    faster();
    run(){
        cin>>n>>k;
        ok=0;
        init();
        while(!ok){
            if(check()){
                for(int i=1;i<=n;i++) cout<<a[i];
                cout<<"\n";
            }
            sinh();
        }
    }
}