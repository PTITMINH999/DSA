#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define run() int t; cin>>t; while(t--)
int main(){
    faster();
    run(){
        int n;cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++) a[i]=n-i;
        do{
            for(int i=0;i<n;i++) cout<<a[i];
            cout<<" ";
        }while(prev_permutation(a.begin(),a.end()));
        cout<<endl;
    }
}