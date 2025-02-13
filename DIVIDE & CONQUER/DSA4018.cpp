#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define run() int t; cin>>t; while(t--)
#define ll long long
int main(){
    faster();
    run(){
        int n;cin>>n;
        vector<int> a(n);
        for(int &x:a) cin>>x;
        cout<<lower_bound(a.begin(),a.end(),1)-a.begin()<<endl;
    }
}