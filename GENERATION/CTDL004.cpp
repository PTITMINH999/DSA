#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define run() int t; cin>>t; while(t--)
int n,k,a[101],x[101],cnt;
void Try(int i,int pre){
    for(int j=pre+1;j<=n-k+i;j++){
        if(a[j]<=x[i-1]) continue;
        x[i]=a[j];
        if(i==k) cnt++;
        else Try(i+1,j);
    }
}
int main(){
    faster();
    cin>>n>>k;
    for(int i=1;i<=n;i++) cin>>a[i];
    Try(1,0);
    cout<<cnt;
}