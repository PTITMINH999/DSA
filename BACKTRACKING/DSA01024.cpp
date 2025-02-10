#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define run() int t; cin>>t; while(t--)
int n,k;
vector<string> v;
int a[35];
void in(){
    for(int i=1;i<=k;i++) cout<<v[a[i]-1]<<" ";
    cout<<endl;
}
void Try(int i){
    for(int j=a[i-1]+1;j<=v.size()-k+i;j++){
        a[i]=j;
        if(i==k) in();
        else Try(i+1);
    }
}
int main(){
    faster();
    cin>>n>>k;
    string s;
    map<string,bool> m;
    for(int i=0;i<n;i++){
        cin>>s;
        m[s]=1;
    }
    for(auto it:m) v.push_back(it.first);
    Try(1);
}