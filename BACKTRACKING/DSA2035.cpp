#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define run() int t; cin>>t; while(t--)
#define ll long long
vector<string> a(9);
int n,k,x[9];
int calc(){
    int maxi = -1e9,mini = 1e9;
    for(int i=0;i<n;i++){
        string num="";
        for(int j=0;j<k;j++){
            num+=a[i][x[j]];
        }
        int tmp=stoi(num);
        maxi=max(maxi,tmp);
        mini=min(mini,tmp);
    }
    return maxi-mini;
}
int main(){
    faster();
    cin>>n>>k;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<k;i++) x[i]=i;
    int ans=1e9;
    do{
        ans=min(ans,calc());
    }while(next_permutation(x,x+k));
    cout<<ans;
}