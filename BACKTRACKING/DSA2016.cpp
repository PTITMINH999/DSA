#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define run() int t; cin>>t; while(t--)
int n,x[35],cot[35],d1[35],d2[35],ans;
void Try(int i){
    for(int j=1;j<=n;j++){
        if(cot[j]==0 && d1[i-j+n]==0 && d2[i+j-1]==0){
            x[i]=j;// đặt con hậu hàng i, cột j
            cot[j]=d1[i-j+n]=d2[i+j-1]=1;
            if(i==n) ans++;
            else Try(i+1);
            // backtrack
            cot[j]=d1[i-j+n]=d2[i+j-1]=0;
        }
    }
}
int main(){
    faster();
    run(){
        ans=0;
        cin>>n;
        for(int i=1;i<=30;i++){
            cot[i]=d1[i]=d2[i]=0;
        }
        Try(1);
        cout<<ans<<endl;
    }
}