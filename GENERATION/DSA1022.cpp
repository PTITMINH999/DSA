#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define run() int t; cin>>t; while(t--)
int main(){
    faster();
    run(){
        int n; cin>>n;
        vector<int> a(n),v(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            v[i]=i+1;
        }
        if(a==v) cout<<1<<endl;
        else{
            int cnt=1;
           do{
                next_permutation(v.begin(),v.end());
                cnt++;
            }while(v!=a);
            cout<<cnt<<endl;
        }
    }
}