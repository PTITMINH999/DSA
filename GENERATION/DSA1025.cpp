#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define run() int t; cin>>t; while(t--)
int x[30],n,k;
void in(){
    for(int i=1;i<=k;i++){
        cout<< (char)(x[i]+'A'-1);
    }
    cout<<endl;
}
void Try(int i){
    for(int j=x[i-1]+1;j<=n-k+i;j++){
        x[i]=j;
        if(i==k) in();
        else Try(i+1);
    }
}
int main(){
    faster();
    run(){
        cin>>n>>k;
        Try(1);
    }
}