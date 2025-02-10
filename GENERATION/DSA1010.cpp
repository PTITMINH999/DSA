#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define run() int t; cin>>t; while(t--)
int n,k,a[1005];
set<int> s;
void next(){
    int i = k;
    while(i>=1 && a[i]==n-k+i){
        i--;
    }
    if(i==0) cout<<k<<endl;
    else{
        a[i]++;
        for(int j=i+1;j<=k;j++) a[j]=a[j-1]+1;
        int cnt=0;
        for(int i=1;i<=k;i++){
            if(s.count(a[i])==0){
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
}
int main(){
    faster();
    run(){
        cin>>n>>k;
        s.clear();
        for(int i=1;i<=k;i++){
            cin>>a[i];
            s.insert(a[i]);
        }
        next();
    }
}