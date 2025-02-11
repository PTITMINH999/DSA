#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define run() int t; cin>>t; while(t--)
int a[]={1000,500,200,100,50,20,10,5,2,1};
int main(){
    faster();
    run(){
        int n;cin>>n;
        int ans=0,i=0;
        while(n){
            while(n>=a[i]){
                ans++;
                n-=a[i];
            }
            i++;
        }
        cout<<ans<<endl;
    }
}