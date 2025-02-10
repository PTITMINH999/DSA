#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define run() int t; cin>>t; while(t--)
#define ll long long
int n,a[105];
int sum;
bool check;
void Try(int i,int tong){
    if(check) return;
    if(tong==sum){
        check=1;
        cout<<"YES\n";
        return;
    }
    if(tong>sum) return;
    for(int j=i;j<=n;j++) Try(j+1,tong+a[j]);
}
int main(){
    faster();
    run(){
        sum=0;
        check=0;
        cin>>n;
        for(int i=1;i<=n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        if(sum%2==1) cout<<"NO\n";
        else{
            sum/=2;
            Try(1,0);
            if(!check) cout<<"NO\n";
        }
    }
}