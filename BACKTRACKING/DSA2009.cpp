#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define run() int t; cin>>t; while(t--)
int n,k,sum;
bool ans=0;
vector<int> a;
void Try(int s,int cnt){
    if(ans) return;
    if(cnt==k){
        ans=1;
        return;
    }
    for(int i=0;i<n;i++){
        if(s==sum) Try(0,cnt+1);
        else if(s<sum) Try(s+a[i],cnt);
        else return;
    }
}
int main(){
    faster();
    run(){
        cin>>n>>k;
        ans=0,sum=0;
        a.clear(); a.resize(n);
        for(int &x:a){
            cin>>x;
            sum+=x;
        }
        if(sum%k!=0) cout<<0<<endl;
        else{
            sum/=k;
            Try(0,0);
            cout<<ans<<endl;
        }
    }
}