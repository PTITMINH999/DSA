#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define run() int t; cin>>t; while(t--)
int n=8,ans;
int a[10][10],cot[20],d1[20],d2[20];
void Try(int i,int s){
    for(int j=1;j<=n;j++){
        if(cot[j]==0 && d1[i-j+n]==0 && d2[i+j-1]==0){
            cot[j]=d1[i-j+n]=d2[i+j-1]=1;
            if(i==n) ans=max(ans,s+a[i][j]);
            else Try(i+1,s+a[i][j]);
            //backtrack
            cot[j]=d1[i-j+n]=d2[i+j-1]=0;
        }
    }
}
int main(){
    faster();
    run(){
        ans=0;
        for(int i=0;i<20;i++){
            cot[i]=d1[i]=d2[i]=0;
        }
        for(int i=1;i<=8;i++){
            for(int j=1;j<=8;j++){
                cin>>a[i][j];
            }
        }
        Try(1,0);
        cout<<ans<<endl;
    }
}