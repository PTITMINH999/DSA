#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define run() int t; cin>>t; while(t--)
bool cmp(pair<int,int> a,pair<int,int> b){
    return a.second<b.second;
}
int main(){
    faster();
    run(){
        int n; cin>>n;
        vector<pair<int,int>> p(n);
        for(int i=0;i<n;i++){
            cin>>p[i].first>>p[i].second;
        }
        sort(p.begin(),p.end(),cmp);
        int res=1,j=0;
        for(int i=1;i<n;i++){
            if(p[i].first >= p[j].second){
                j=i;
                res++;
            }
        }
        cout<<res<<endl;
    }
}