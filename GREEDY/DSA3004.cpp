#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define run() int t; cin>>t; while(t--)
#define ll long long
int main(){
    faster();
    run(){
        int n;cin>>n;
        int a[n];
        for(int &x:a) cin>>x;
        sort(a,a+n);
        ll num1=0,num2=0;
        for(int i=0;i<n;i++){
            if(i%2) num1=num1*10+a[i];
            else num2=num2*10+a[i];
        }
        cout<<num1+num2<<endl;
    }
}