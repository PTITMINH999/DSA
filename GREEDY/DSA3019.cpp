#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define run() int t; cin>>t; while(t--)
#define ll long long
int main(){
    faster();
    run(){
        ll p,q; cin>>p>>q;
        while(q%p){
            ll newQ= q/p+1;
            cout<<"1/"<<newQ<<" + ";
            p=p*newQ-q;
            q=q*newQ;
        }
        cout<<"1/"<<q/p<<endl;
    }
}