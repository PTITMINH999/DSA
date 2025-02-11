#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define run() int t; cin>>t; while(t--)
int main(){
    faster();
    run(){
        int n,m,k;
        bool check=0;
        cin>>n>>m>>k;
        int a[n],b[m],c[k];
        for(int &x:a) cin>>x;
        for(int &x:b) cin>>x;
        for(int &x:c) cin>>x;
        int i=0,j=0,q=0;
        while(i<n && j<m && q<k){
            if(a[i]==b[j] && a[i]==c[q]){
                cout<<a[i]<<" ";
                check=1;
                i++;j++;q++;
            }
            else if(a[i]<b[j]) i++;
            else if(b[j]<c[q]) j++;
            else q++;
        }
        if(!check) cout<<"NO";
        cout<<endl;
    }
}