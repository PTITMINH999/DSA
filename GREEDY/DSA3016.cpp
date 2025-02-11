#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define run() int t; cin>>t; while(t--)
#define ll long long
int main(){
    faster();
    run(){
        int s,d;
        cin>>s>>d;
        if(9*d <s ){
            cout<<-1<<endl;
            continue;
        }
        int a[d]={};
        a[0]=1;
        int dis=s-1;
        int i=d-1;
        while(dis>=9){
            a[i]=9;
            dis-=9;
            i--;
        }
        a[i]+=dis;
        for(int x:a) cout<<x;
        cout<<endl;
    }
}