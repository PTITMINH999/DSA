#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define run() int t; cin>>t; while(t--)
#define ll long long
/*
    tìm m nhỏ nhất sao cho m*n>=s;
    m=(s+n-1)/n
*/
int main(){
    faster();
    run(){
        int n,s,m;
        cin>>n>>s>>m;
        if(n*(s-s/7) < m*s) cout<<-1<<endl;
        else cout<<(m*s + n-1)/n<<endl;
    }
}