#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define run() int t; cin>>t; while(t--)
#define ll long long
int x[27],n,k;
void in(){
    for(int i=1;i<=k;i++){
        cout<<char('A'+x[i]-1);
    }
    cout<<endl;
}
void Try(int i,int pos){
    for(int j=pos;j<=n;j++){
        x[i]=j;
        if(i==k) in();
        else Try(i+1,j);
    }
}
int main(){
    char c; cin>>c>>k;
    n=c-'A'+1;
    Try(1,1);
}