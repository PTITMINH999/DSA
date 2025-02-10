#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define run() int t; cin>>t; while(t--)
#define ll long long
int n,s,a[35];
bool check;
void Try(int i,int sum,int cnt){
    if(check) return;
    if(sum>s) return;
    if(sum==s){
        check=1;
        cout<<cnt<<endl;
        return;
    }
    for(int j=i;j<=n;j++){
        Try(j+1,sum+a[j],cnt+1);
    }
}
int main(){
    faster();
    cin>>n>>s;
    for(int i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+n+1,greater<>());
    check=0;
    Try(1,0,0);
    if(!check) cout<<-1;
}