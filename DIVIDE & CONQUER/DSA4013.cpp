#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define run() int t; cin>>t; while(t--)
#define ll long long
int main(){
    faster();
    run(){
        int n;cin>>n;
        int a[n];
        for(int &x:a) cin>>x;
        sort(a,a+n);
        int i=0,j=n/2;
        int ans=n;
        while(i<n && j<n){
            if(a[i]*2<=a[j]){
                ans--;
                i++;j++;
            }
            else j++;
        }
        cout<<ans<<endl;
    }
}