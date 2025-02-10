#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define run() int t; cin>>t; while(t--)
int n,k,a[25],x[25];
bool check;
void in(int m){
    cout<<"[";
    for(int i=1;i<m;i++) cout<<x[i]<<" ";
    cout<<x[m]<<"]";
}
void Try(int i,int pre,int s){
    for(int j=pre;j<=n;j++){
        if(s+a[j]==k){
            x[i]=a[j];
            in(i);
            check=1;
            return;
        }
        if(s+a[j]<k){
            x[i]=a[j];
            Try(i+1,j,s+a[j]);
        }
    }
}
int main(){
    faster();
    run(){
        cin>>n>>k;
        for(int i=1;i<=n;i++) cin>>a[i];
        check=0;
        Try(1,1,0);
        if(!check) cout<<-1;
        cout<<endl;
    }
}