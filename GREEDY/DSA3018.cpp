#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define run() int t; cin>>t; while(t--)
#define ll long long
int main(){
    faster();
    run(){
        int n;cin>>n;
        int c4=0,c7=0;
        c7=n/7;
        while(c7>=0){
            if((n-c7*7)%4==0){
                c4=(n-c7*7)/4;
                break;
            }
            c7--;
        }
        if(c7<0) cout<<"-1\n";
        else{
            while(c4--) cout<<4;
            while(c7--) cout<<7;
            cout<<"\n"; 
        }
    }
}