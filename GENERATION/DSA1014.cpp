#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define run() int t; cin>>t; while(t--)
int n,k,s,a[100],ans;
void Try(int i,int sum,int pre){
    for(int j=pre+1;j<=n;j++){
        a[i]=j;
        if(i==k && sum+j==s) ans++;
        if(i<k) Try(i+1,sum+j,j); 
    }
}
int main(){
    faster();
    while(1){
        cin>>n>>k>>s;
        if(n==0 && k==0 && s==0) break;
        ans=0;
        Try(1,0,0);
        cout<<ans<<endl;
    }
}