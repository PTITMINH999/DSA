#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define run() int t; cin>>t;cin.ignore(); while(t--)
#define ll long long
string s,ans;
char c[4]={'+','-','*','/'};
bool check;
bool validcheck(){
    int a=stoi(ans.substr(0,2));
    int b=stoi(ans.substr(5,2));
    int c=stoi(ans.substr(10,2));
    if(ans[3]=='+') return a+b==c;
    if(ans[3]=='-') return a-b==c;
    if(ans[3]=='*') return a*b==c;
    return a/b==c;
}
void Try(int i){
    if(check) return;
    if(i==s.size()){
        if(validcheck()){
            check=1;
            cout<<ans<<endl;
        }
        return;
    }
    if(s[i]!='?') Try(i+1);
    else if(i==3){
        for(int j=0;j<4;j++){
            ans[i]=c[j];
            Try(i+1);
        }
    }
    else{
        for(int j=0;j<=9;j++){
            if(j==0){
                if(i==0||i==5||i==10) continue;
            }
            ans[i]=j+'0';
            Try(i+1);
        }
    }
}
int main(){
    faster();
    run(){
        getline(cin,s);
        ans=s; check=0;
        Try(0);
        if(!check) cout<<"WRONG PROBLEM!"<<endl;
    }
}
