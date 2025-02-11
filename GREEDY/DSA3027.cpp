#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define run() int t; cin>>t; while(t--)
int main(){
    faster();
    int n,a; cin>>n;
    long long sum=0;
    for(int i=0;i<n;i++){
        cin>>a;
        if(a>0) sum+=a*2;
    }
    cout<<sum<<endl;
}