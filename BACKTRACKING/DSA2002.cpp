#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define run() int t; cin>>t; while(t--)
int main(){
    faster();
    run(){
        int n;cin>>n;
        int a[n];
        for(int &i:a) cin>>i;
        int q=n,c=0;
        vector<vector<int>> v;
        while(q--){
            vector<int> b;
            for(int i=c;i<n;i++) b.push_back(a[i]);
            v.push_back(b);
            c++;
            for(int i=n-1;i>=c;i--){
                a[i]+=a[i-1];
            }
        }
        for(int i=v.size()-1;i>=0;i--){
            cout<<"[";
            for(int j=0;j<v[i].size();j++){
                if(j==v[i].size()-1) cout<<v[i][j]<<"] ";
                else cout<<v[i][j]<<" ";
            }
        }
        cout<<endl;
    }
}