#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define run() int t; cin>>t; while(t--)
int n;
char a[1001];
bool ok=0;
void init(){
    for(int i=1;i<=n;i++) a[i]='A';
}
void sinh(){
    int i=n;
    while(i>=1 && a[i]=='B'){
        a[i]='A';
        i--;
    }
    if(i==0) ok=1;
    else a[i]='B';
}
int main(){
    faster();
    run(){
        cin>>n;
        ok=0;
        init();
        while(!ok){
            for(int i=1;i<=n;i++){
                cout<<a[i];
            }
            cout<<" ";
            sinh();
        }
        cout<<endl;
    }
}