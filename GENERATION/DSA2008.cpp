#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define run() int t; cin>>t; while(t--)
int n,k,a[100];
int m[100][100];
int main(){
    faster();
    cin>>n>>k;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            cin>>m[i][j];
    for(int i=1;i<=n;i++) a[i]=i;
    vector<vector<int>> v;
    do{
        int sum=0;
        for(int i=1;i<=n;i++) sum+=m[i][a[i]];
        if(sum==k){
            vector<int> b(a+1,a+n+1);
            v.push_back(b);
        }
    }while(next_permutation(a+1,a+n+1));
    cout<<v.size()<<endl;
    for(auto it:v){
        for(int x:it){
            cout<<x<<" ";
        }
        cout<<endl;
    }
}