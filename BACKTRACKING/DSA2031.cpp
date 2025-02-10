#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define run() int t; cin>>t; while(t--)
#define ll long long
bool check(char c){
    return (c=='A' || c=='E');
}
bool ktra(string s){
    for(int i=0;i<s.size();i++){
        if(check(s[i])){
            if(i!=0 && i!=s.size()-1){
                if(!check(s[i-1]) && !check(s[i+1])) return 0;
            }
        }
    }
    return 1;
}
int main(){
    faster();
    char c;cin>>c;
    string s="";
    for(int i='A';i<=c;i++) s+=i;
    do{
        if(ktra(s)) cout<<s<<endl;
    }while(next_permutation(s.begin(),s.end()));
}