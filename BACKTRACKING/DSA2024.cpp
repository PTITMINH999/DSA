#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define run() int t; cin>>t; while(t--)
#define ll long long
int n,a[30];
vector<string> v;
vector<int> tmp;
void in(){
    string res="";
    for(int &x:tmp) res+=to_string(x)+" ";
    v.push_back(res);
}
void Try(int pos){
    for(int j=pos+1;j<=n;j++){
        if(a[pos]<a[j]){
            tmp.push_back(a[j]);
            if(tmp.size()>=2) in();
            Try(j);
            tmp.pop_back();
        }
    }
}
int main(){
    faster();
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    Try(0);
    sort(v.begin(),v.end());
    for(string it:v) cout<<it<<endl;
}