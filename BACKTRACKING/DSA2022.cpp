#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define run() int t; cin>>t; while(t--)
#define ll long long
string s="2000";
char a[2]={'0','2'};
vector<string> d,m,y;
void Try(int i){
    for(int j=0;j<2;j++){
        s[i]=a[j];
        if(i==3) y.push_back(s);
        else Try(i+1);
    }
}
int main(){
    faster();
    d.push_back("02");
    d.push_back("20");
    d.push_back("22");
    m.push_back("02");
    Try(1);
    for(string i:d){
        for(string j:m){
            for(string k:y){
                cout<<i<<"/"<<j<<"/"<<k<<endl;
            }
        }
    }
}