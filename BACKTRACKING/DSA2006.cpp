#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define run() int t; cin>>t; while(t--)
int n,k,a[101],x[101],ok;
void in(int m){
    cout<<"[";
    for(int i=1;i<m;i++) cout<<x[i]<<" ";
    cout<<x[m]<<"] ";
}
void  Try(int i,int pos,int sum){
    // i: số lg phần tử của x[], pos: chỉ số phần tử cuối cùng của dãy con 
    for(int j=pos+1;j<=n;j++){
        if(sum+a[j]==k){
            ok=1;
            x[i]=a[j];
            in(i);
            return;
        }
        else if(sum+a[j]<k){
            x[i]=a[j];
            Try(i+1,j,sum+a[j]);
        }
    }
}
int main(){
    faster();
    run(){
        cin>>n>>k;
        for(int i=1;i<=n;i++) cin>>a[i];
        sort(a+1,a+n+1);
        ok=0;
        Try(1,0,0);
        if(!ok) cout<<-1;
        cout<<endl;
    }
}