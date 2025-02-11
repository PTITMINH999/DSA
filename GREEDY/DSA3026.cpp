#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define run() int t; cin>>t; while(t--)
int main(){
    faster();
    int m,s;
    cin>>m>>s;
    if(s>9*m || (s==0 && m>1)){
        cout<<"-1 -1";
        return 0;
    }
    int a[m]={0},b[m]={0};
    int t=s;
    for(int i=0;i<m;i++){
        if(s>=9){
            a[i]=9;
            s-=9;
        }
        else if(s!=0){
            a[i]=s;
            s=0;
        }
        else break;
    }
    --t;
    for(int i=m-1;i>0;i--){
        if(t>=9){
            b[i]=9;
            t-=9;
        }
        else if(t!=0){
           b[i]=t;
            t=0;
        }
        else break;
    }
    b[0]=t+1;
    for(int x:b) cout<<x;
    cout<<" ";
    for(int x:a) cout<<x;
}