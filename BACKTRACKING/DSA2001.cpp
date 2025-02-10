#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define run() int t; cin>>t; while(t--)
int main(){
    faster();
    run(){
        int n;cin>>n;
        int q=n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int c=0;
        while(q--){
            cout<<"[";
            for(int i=c;i<n-1;i++) cout<<a[i]<<" ";
            cout<<a[n-1]<<"]\n";
            c++;
            for(int i=n-1;i>=c;i--){
                a[i]+=a[i-1];
            }
        }
    }
}