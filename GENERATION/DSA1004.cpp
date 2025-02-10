#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
int n,k,x[100];
bool final=0;           
void init(){
    for(int i=1;i<=k;i++) x[i]=i;
}
void sinh(){
    int i=k;
    while(i>=1 && x[i]==n-k+i){
        i--;
    }
    if(i==0) final=1;
    else{
        x[i]++;
        for(int j=i+1;j<=k;j++) x[j]=x[j-1]+1;
    }
}
int main(){
    faster();
    int t; cin>>t;
    while(t--){
        cin>>n>>k;
        init();
        final=0;
        while(!final){
            for(int i=1;i<=k;i++)
                cout<<x[i];
            cout<<" ";
            sinh();
        }
        cout<<endl;
    }
}