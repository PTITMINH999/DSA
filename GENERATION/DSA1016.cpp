#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define run() int t; cin>>t; while(t--)
int n,a[100],cnt;
bool ok=0;
void init(){
    cnt=1;
    a[1]=n;
}
void sinh(){
    int i=cnt;
    while(i>=1 && a[i]==1) i--;
    if(i==0) ok=1;
    else{
        a[i]--;
        int d=cnt-i+1;
        cnt=i;
        int q=d/a[i];
        int r=d%a[i];
        if(q){
            for(int j=1;j<=q;j++){
                ++cnt;
                a[cnt]=a[i];
            }
        }
        if(r){
            ++cnt;
            a[cnt]=r;
        }
    }
}
int main(){
    faster();
    run(){
        cin>>n;
        ok=0;
        init();
        while(!ok){
            cout<<"(";
            for(int i=1;i<=cnt;i++){
               cout<<a[i];
               if(i==cnt) cout<<") ";
               else cout<<" ";
            }
            sinh();
        }
        cout<<endl;
    }
}